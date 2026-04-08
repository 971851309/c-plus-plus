#pragma once
#include"shelf.h"

typedef struct EachItemInCart
{
	std::string sItemName;
	unsigned int nCount;
}CartItem;

class Cart
{
private:
	std::vector<CartItem*> cartVec;
	Shelf* shelf;
	Cart();
public:
	Cart(Shelf*);
	float getTotalPrice();
	unsigned int getCount();
	unsigned int getItemKinds();
	CartItem* getItemByIndex(unsigned int index);
	void addIntoCart(std::string strItemName);
	void removeFromCart(unsigned int index);
	void clearCart();
};