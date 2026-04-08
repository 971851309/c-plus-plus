#include <iostream>
#include "queue.h"
//模板函数
template <typename T> T getMax(T a, T b)
{
	return a > b ? a : b;
	//三元表达式
}



int main()
{
	/*std::cout << getMax(10, 20) << std::endl;
	std::cout << getMax(2.27f, 3.14f) << std::endl;
	std::cout << getMax('a', 'A') << std::endl;
	std::cout << getMax("a","ABCD") << std::endl;*/

	Queue<int> nQueue;
	Queue<char> cQueue;
	//定义了两个队列类的对象

	nQueue.enQueue(1);
	cQueue.enQueue('a');
	nQueue.display();
	cQueue.display();

	nQueue.enQueue(2);
	cQueue.enQueue('b');
	nQueue.display();
	cQueue.display();

	nQueue.enQueue(3);
	cQueue.enQueue('c');
	nQueue.display();
	cQueue.display();

	nQueue.deQueue();
	cQueue.deQueue();
	nQueue.display();
	cQueue.display();

	nQueue.deQueue();
	cQueue.deQueue();
	nQueue.display();
	cQueue.display();

	nQueue.deQueue();
	cQueue.deQueue();
	nQueue.display();
	cQueue.display();

	getchar();
	return 0;
}