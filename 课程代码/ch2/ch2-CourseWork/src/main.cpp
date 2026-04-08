#include <iostream>
int showItemName(std::string name)
{
	//执行一系列操作
	//这个商品是：
	std::cout <<name<<std::endl;//std::endl表示换行符
	return 0;
}
int main()
{
	std::string itemName1;
	std::string itemName2;
	//声明变量
	itemName1 = "可乐";
	itemName2 = "薯片";
	showItemName(itemName1);
	showItemName(itemName2);
	//调用函数
	std::cin.get();//这句的意义是防止程序正常结束后自动关闭
	return 0;
}