#include "Inventory.h"


Inventory::Inventory()
{
	this->Cap = 10;
	this->ItemNo = 0;
	this->ItemArr = new Items * [Cap];



}

Inventory::~Inventory()
{

	for (size_t i = 0; i < this->ItemNo; i++)
	{
		delete this->ItemArr[i];

	}
	delete[] ItemArr;

}

void Inventory::expand()
{
	this->Cap *= 2;
	Items** tempArr = new Items * [Cap];

	for (size_t i = 0; i < ItemNo; i++)
	{
		tempArr[i] = new Items(*ItemArr[i]);
	}

	for (size_t i = 0; i < ItemNo; i++)
	{
		delete this->ItemArr[i];
	}
	delete[] this->ItemArr;

	this->ItemArr = tempArr;

	this->initialize(this->ItemNo);


}


void Inventory::AddItem(const Items& items)
{
	if (this->ItemNo >= this->Cap)
	{
		expand();
	}
	
	this->ItemArr[this->ItemNo++] = new Items( items);


}




void Inventory::initialize(const int from)
{
	for (size_t i = from; i < Cap; i++)
	{
		this->ItemArr[i] = nullptr;

	}
}


void Inventory::removeItem(int index)
{

}