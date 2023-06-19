#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class Stringg
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	Stringg(const char *s);
	Stringg();
	Stringg(const Stringg &st);
	~Stringg();
	int length() const { return len; }

	Stringg& operator=(const Stringg& st);
	Stringg& operator=(const char* s);
	Stringg& operator+(const Stringg& st);
	/*Stringg& operator+(const char* s);*/
	
	char& operator[](int i);
	const char& operator[](int i)const;

	friend bool operator<(const Stringg& st1, const Stringg& st2);
	friend bool operator>(const Stringg& st1, const Stringg& st2);
	friend bool operator==(const Stringg& st1, const Stringg& st2);
	friend ostream& operator<<(ostream& os, const Stringg& st);
	friend istream& operator>>(istream& is, Stringg& st);

	/*
	연산자 오버로딩 +
	문자열에 있는 모든 영문자를 소문자로 변환하는 stringlow()
	모든 대문자를 소문자로 변환하는 stringup()
	문자열에 주어지는 문자가 출연하는 횟수 (char 매개변수)
	*/
	friend Stringg operator+(const char* s, Stringg& st2);
	/*friend Stringg operator+(Stringg& st1, Stringg& st2);*/
	void stringlow();
	void stringup();
	int charcount(char word);

	static int HowMany();
};