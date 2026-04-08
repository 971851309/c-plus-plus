#include <iostream>

class A
{
public:
	A()
	{
		std::cout << "默认构造函数调用" << std::endl;
	}
	A(int nVar1, int nVar2)
	{
		std::cout << "有参构造函数调用:"<<nVar1+nVar2<< std::endl;
	}
	~A()//析构函数
	{
		std::cout << "析构函数调用" << std::endl;
	}
};

int main()
{
	A a;
	A b(1, 2);

	A* ptr1 = new A;
	A* ptr2 = new A(3, 5);

	delete(ptr1);
	delete(ptr2);
	
	getchar();
	return 0;
}