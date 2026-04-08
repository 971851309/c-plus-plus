#include <iostream>

class A
{
public:
	static unsigned int nCount;//静态成员变量
	unsigned int localCount;//普通成员变量
	A()
	{
		localCount = 0;
		nCount++;
		localCount++;
	}
	~A()
	{
		nCount--;
		localCount--;
	}
};
unsigned int A::nCount = 0;//对静态成员变量赋初值


int main()
{
	A* ptr1 = new A;
	std::cout << "nCount:" << A::nCount <<"\t localCount:"<<ptr1->localCount<< std::endl;
	A* ptr2 = new A;
	std::cout << "nCount:" << A::nCount << "\t localCount:" << ptr1->localCount << std::endl;
	A* ptr3 = new A;
	std::cout << "nCount:" << A::nCount << "\t localCount:" << ptr1->localCount << std::endl;
	//创建了3个A的对象

	delete(ptr3);
	std::cout << "nCount:" << A::nCount << "\t localCount:" << ptr1->localCount << std::endl;
	delete(ptr2);
	std::cout << "nCount:" << A::nCount << "\t localCount:" << ptr1->localCount << std::endl;
	delete(ptr1);
	std::cout << "nCount:" << A::nCount << std::endl;

	getchar();
	return 0;
}