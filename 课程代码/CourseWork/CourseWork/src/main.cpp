#include <iostream>
#include <vector>
#define NUM_OF_GOODS 3
#define MAX_NUM_OF_CART 20

enum Category { FOOD, TOY, DAILY };
typedef struct OneItemInfo
{
	std::string sName;
	float fPrice;
	Category category;
}ItemInfo;
//C++11新特性，结构体直接赋默认值

typedef struct UserInfo
{
	std::string sUserName;
	std::string sPassword;
}User;

typedef struct ItemInCart
{
	unsigned int nItemId = 0;
	unsigned int nCount = 0;
}CartItem;

//全局变量，声明一些整个文件所有函数都可用的变量
ItemInfo priceTable[NUM_OF_GOODS];
std::vector<CartItem> cartVec;
User user1;



void showAllItem()
{
	std::cout << "id\t\t商品\t\t价格" << std::endl;
	for (int i = 0; i < NUM_OF_GOODS; i++)
	{
		std::cout << i + 1 << "\t\t" << priceTable[i].sName << "\t\t" << priceTable[i].fPrice << std::endl;
	}
	std::cout << std::endl;
}

void showCart()
{
	std::cout << "购物车情况：" << std::endl;
	for (int i = 0; i < cartVec.size(); i++)
	{
		std::cout << i + 1 << "\t\t" << priceTable[cartVec[i].nItemId - 1].sName << "\t\t" << cartVec[i].nCount;
		if (FOOD == priceTable[cartVec[i].nItemId - 1].category)
		{
			std::cout << "\t\t食品";
		}
		else if (TOY == priceTable[cartVec[i].nItemId - 1].category)
		{
			std::cout << "\t\t玩具";
		}
		else if (DAILY == priceTable[cartVec[i].nItemId - 1].category)
		{
			std::cout << "\t\t日用品";
		}
		else
		{
			//统一处理异常情况
			std::cout << "\t\t其他";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void addItem()
{
	if (cartVec.size() >= MAX_NUM_OF_CART)
	{
		std::cout << "购物车已满" << std::endl;
		return;
	}
	showAllItem();

	CartItem tempItem;
	std::cout << "请输入要添加商品的id：";
	std::cin >> tempItem.nItemId;

	std::cout << "请输入要添加商品的数量：";
	std::cin >> tempItem.nCount;

	cartVec.push_back(tempItem);

	showCart();
}

void initItemInfo()
{
	priceTable[0].sName = "milk";
	priceTable[0].fPrice = 3.5f;
	priceTable[0].category = FOOD;

	priceTable[1].sName = "barbie";
	priceTable[1].fPrice = 22.f;
	priceTable[1].category = TOY;

	priceTable[2].sName = "tissue";
	priceTable[2].fPrice = 1.5f;
	priceTable[2].category = DAILY;
}


void initUser1()
{
	user1.sUserName = "tt";
	user1.sPassword = "123";
}

int login()
{
	std::string userName;
	std::string passWord;
	std::cout << "请输入用户名：";
	std::cin >> userName;
	std::cout << "请输入密码：";
	std::cin >> passWord;
	if (0==userName.compare(user1.sUserName))
	{
		if (0==passWord.compare(user1.sPassword))
		{
			return 0;//直接就返回了 0表示成功登录
		}
	}
	return -1;

}



int main()
{
	initItemInfo();
	int isLogin = -1;
	initUser1();
	do
	{
		std::cout << "请登录" << std::endl;
		isLogin = login();
	} while (0 != isLogin);
	std::cout << "登陆成功！" << std::endl;
	
	do
	{
		addItem();
		getchar();
	} while ('e' != getchar());
	return 0;
}
