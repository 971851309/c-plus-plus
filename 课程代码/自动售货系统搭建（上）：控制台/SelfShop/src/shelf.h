#pragma once
#include "item.h"
#include <vector>

class Shelf
{
private:
	std::vector<Item*> itemVec;
public:
	Shelf();
	unsigned int getStockOf(std::string sItemName);
	unsigned int getItemKinds();
	void addItem(Item* item);
	int takeOneItem(unsigned int index);
	Item* getItemByName(std::string sItemName);
	Item* getItemByIndex(unsigned int index);
};