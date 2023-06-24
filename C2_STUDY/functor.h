#pragma once
#include "all.h"

template<class T>
class TooBig
{
private:
	T cuttoff;
public:
	TooBig(const T& t) : cutoff(t) {}
	bool operator()(const T& v) { return v > cuttoff; }
};

void outint(int n) { std::cout << n << " "; }