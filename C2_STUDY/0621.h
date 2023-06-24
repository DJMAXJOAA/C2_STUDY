#pragma once
#include "all.h"

using namespace std;

class A : public exception
{
public:
	A() {}
	char const* what() const { return "A class"; }
};

class B
{

};

void ThrowTest(int number)
{
	A a;
	throw a;
}

