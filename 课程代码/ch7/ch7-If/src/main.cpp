#include<iostream>
//输出1000AC-2000AC的闰年
//闰年：①是4的倍数 ②不是100的倍数 ③是400的倍数
int main()
{
	long lYear;
	for (lYear = 1000; lYear <= 2000; lYear++)
	{
		if (0 == lYear % 400)
		{
			std::cout << lYear << "\t";
		}
		else if (0 == lYear % 4 )
		{
			if (0 == lYear % 100);
			else
			{
				std::cout << lYear << "\t";
			}
		}
	}
	std::cin.get();
	return 0;
	
}