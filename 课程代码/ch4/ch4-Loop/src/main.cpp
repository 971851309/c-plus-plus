#include<iostream>


int main()
{
	//1.初始化变量
	long long nResult, i;
	nResult = 0;

	//2.循环体/出口条件判断
	for (i = 1; i <= 100000000; i++)
	{
		nResult = nResult + i;
		std::cout << nResult << std::endl;
	}

	std::cout << "最终结果是：" << nResult << std::endl;
	std::cin.get();
	return 0;
}