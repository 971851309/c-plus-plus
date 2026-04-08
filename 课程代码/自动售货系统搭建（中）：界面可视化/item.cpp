#include "item.h"

Item::Item(std::string sItemName, float fPrice, unsigned int nStock)
{
	this->sItemName = sItemName;
	this->fPrice = fPrice;
	this->nStock = nStock;
}

std::string Item::getItemName()
{
	return sItemName;
}
float Item::getPrice()
{
	return fPrice;
}

unsigned int Item::getStock()
{
	return nStock;
}

void Item::add(unsigned int nAmount)
{
	nStock += nAmount;
}

int Item::reduceOne()
{
	if (0 == nStock)
		return -1;

	nStock--;
	return 0;
}