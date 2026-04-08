#include <iostream>

int main()
{
	int a = 5, b = 3;
	// (ÅÐ¶Ï)?(Óï¾ä1):(Óï¾ä2)   
	(a > b) ? (std::cout << a): (std::cout << b);
	
	std::cin.get();
	return 0;
		
}