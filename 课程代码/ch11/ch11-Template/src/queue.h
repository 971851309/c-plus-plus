#pragma once
#include <vector>
//模板类：Queue队列：尾进头出
template <typename T>
class Queue
{
private:
	std::vector<T> vec;
public:
	Queue();
	void deQueue();//出队列
	void enQueue(T elem);//入队列
	void display();
};

template <typename T>
Queue<T>::Queue()
{
}

template <typename T>
void Queue<T>::deQueue()//出队列
{
	vec.erase(vec.begin());
}


template <typename T>
void Queue<T>::enQueue(T elem)//入队列
{
	vec.push_back(elem);
}

template <typename T>
void Queue<T>::display()
{
	std::cout << "队列元素：" << std::endl;
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << std::endl;
	}
}