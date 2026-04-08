#pragma once
#include "item.h" 
class Daily : public Item
{
private:
	Daily();
public:
	Daily(std::string, float , unsigned int);
	std::string showDetail();
};