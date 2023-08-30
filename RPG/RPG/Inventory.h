#pragma once
#include "Items.h"
#include <iomanip>
#include <cmath>
#include <iostream>


class Inventory
{
public:
	Inventory();
	virtual ~Inventory();
	void AddItem(const Items& items);
	void removeItem(int index);




private:

	void expand();
	int Cap;
	int ItemNo;
	void initialize(const int from);
	Items** ItemArr;


};

