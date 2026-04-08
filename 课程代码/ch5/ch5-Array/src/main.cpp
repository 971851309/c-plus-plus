#include <iostream>

int main()
{
	int sArray[3] = {0 , 1 , 2 };
	for (int i = 0; i < sizeof(sArray)/sizeof(sArray[0]); i++)
	{
		std::cout << sArray[i] << std::endl;
	}
	return 0;
}