#pragma once
#include "all.h"
using namespace std;

template<class Type>
class Stack
{
private:
	enum { Size = 10 };
	int stackszie;
	Type* items;
	int top;
public:
	explicit Stack(int ss = Size);
	Stack(const Stack& st);
	~Stack() { delete[] items };
	bool 
};