#include "shelf.h"
Shelf::Shelf()
{
}

unsigned int Shelf::getStockOf(std::string sItemName)
{
	for (int i = 0; i < itemVec.size(); i++)
	{
		if (0 == itemVec[i]->getItemName().compare(sItemName))
		{
			return itemVec[i]->getStock();
		}
	}
	return 0;
}
unsigned int Shelf::getItemKinds()
{
	return itemVec.size();
}
void Shelf::addItem(Item* item)
{
	itemVec.push_back(item);
}
int Shelf::takeOneItem(unsigned int index)
{
	if (itemVec.size() > index)
	{
		if (0 == itemVec[index]->reduceOne())
			return 0;
		else
			return -1;
	}
	return -1;
}
Item* Shelf::getItemByName(std::string sItemName)
{
	for (int i = 0; i < itemVec.size(); i++)
	{
		if (0 == itemVec[i]->getItemName().compare(sItemName))
		{
			return itemVec[i];
		}
	}
	return nullptr;
}
Item* Shelf::getItemByIndex(unsigned int index)
{
	if (itemVec.size() > index)
	{
		return itemVec[index];
	}
	return nullptr;
}