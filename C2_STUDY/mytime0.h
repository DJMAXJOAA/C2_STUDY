#pragma once
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>
#include <new>

class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	void show() const;
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(double n) const;
	friend Time operator*(double m, const Time & t)
	{
		return t * m;
	}
	friend std::ostream& operator << (std::ostream& os, const Time& t);

private:
	int hours;
	int minutes;
};