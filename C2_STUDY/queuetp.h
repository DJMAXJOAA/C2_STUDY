#pragma once
#include "all.h"

template<class Type>
class Queue
{
	enum { SIZE = 10 };
	int queuesize;	// 큐의 전체 사이즈
	Type* items;	// 큐 항목들 저장
	int num;	// 큐의 현재 사이즈
	int front;
	int back;
public:
	explicit Queue(int ss = SIZE);
	Queue(const Queue& que);
	~Queue() { delete[] items; }
	bool isempty() { return num == 0; }
	bool isfull() { return queuesize == num; }
	bool enque(const Type& item);
	bool deque(Type& item);
	/*Queue& operator=(const Queue<Type>& st);*/
};

template<class Type>
Queue<Type>::Queue(int ss)
	: queuesize(ss), num(0), front(0), back(0)
{
	items = new Type[queuesize];
}

template<class Type>
Queue<Type>::Queue(const Queue& que)
{
	queuesize = que.queuesize;
	num = que.num;
	front = que.front;
	back = que.back;
	items = new Type[queuesize];
	for (int i = 0; i < queuesize; i++)
	{
		items[i] = que.items[i];
	}
}

template<class Type>
bool Queue<Type>::enque(const Type& item)
{
	if (isfull())
		return false;
	num++;
	if (back == queuesize -1)
	{
		items[back] = item;
		back = 0;
		return true;
	}
	else
		items[back++] = item;
	return true;
}

template<class Type>
bool Queue<Type>::deque(Type& item)
{
	if (isempty())
		return false;
	num--;
	if (front == queuesize -1)
	{
		item = items[front];
		front = 0;
		return true;
	}
	else
		item = items[front++];
	return true;
}

//template<class Type>
//Queue<Type>& Queue<Type>::operator=(const Queue<Type>& st)
//{
//	if (this == &st)
//		return *this;
//	delete[] items;
//	queuesize = st.queuesize;
//	num = st.num;
//	front = st.front;
//	back = st.back;
//	items = new Type[queuesize];
//	for (int i = 0; i < queuesize; i++)
//	{
//		items[i] = st.items[i];
//	}
//}
