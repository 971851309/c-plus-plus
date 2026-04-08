#include "cart.h"
Cart::Cart(Shelf* shelf)
{
	this->shelf = shelf;
}

float Cart::getTotalPrice()
{
	float fTotalPrice = 0;
	for (int i = 0; i < cartVec.size(); i++)
	{
		Item* tempPtr = shelf->getItemByName(cartVec[i]->sItemName);
		if (nullptr != tempPtr)//查找成功了
		{
			fTotalPrice += cartVec[i]->nCount * tempPtr->getPrice();
		}
	}
	return fTotalPrice;
}
unsigned int Cart::getCount()
{
	unsigned int nCount = 0;
	for (int i = 0; i < cartVec.size(); i++)
	{
		nCount += cartVec[i]->nCount;
	}
	return nCount;
}
unsigned int Cart::getItemKinds()
{
	return cartVec.size();
}
CartItem* Cart::getItemByIndex(unsigned int index)
{
	if (index >= cartVec.size())
		return nullptr;
	return cartVec[index];
}

void Cart::addIntoCart(std::string strItemName)
{
	for (int i = 0; i < cartVec.size(); i++)
	{
		if (0 == cartVec[i]->sItemName.compare(strItemName))
		{
			cartVec[i]->nCount++;
			return;
		}
	}

	CartItem* tempPtr = new CartItem;
	tempPtr->sItemName = strItemName;
	tempPtr->nCount = 1;
	cartVec.push_back(tempPtr);

}
void Cart::removeFromCart(unsigned int index)
{
	if (1 == cartVec[index]->nCount)//拿走最后一个
	{
		delete(cartVec[index]);
		cartVec.erase(cartVec.begin() + index);
		return;
	}
	cartVec[index]->nCount--;
}
void Cart::clearCart()
{
	cartVec.clear();
}