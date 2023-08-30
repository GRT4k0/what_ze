#pragma once
#include <string>


class Items
{
public:

	Items();
	virtual ~Items();

private:

	std::string name;
	int sellValue;
	int buyValue;


};

