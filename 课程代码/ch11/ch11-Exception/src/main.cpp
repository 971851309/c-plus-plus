#include<iostream>
#include<exception>
class MyException : public std::exception
{
public:
	//多态的知识：虚函数的重写（实现）
	const char* what() const throw()
	{
		std::cout << "不能除以0！" << std::endl;
		return "不能除以0！";
	}
};


int main()
{
	int a, b;
	std::cin >> a>>b;
	try
	{
		if (0 == b)
		{
			throw(new MyException);//new出来的结果是一个对象的指针
		}
		std::cout << a / b;
	}
	catch (float fVar)
	{
		std::cout << fVar << ".f不能除以0" << std::endl;
	}
	catch(MyException* excPtr)//什么都可以catch到
	{
		excPtr->what();
		delete(excPtr);
	}
	getchar();
	return 0;
}