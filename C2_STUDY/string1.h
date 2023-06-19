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
	������ �����ε� +
	���ڿ��� �ִ� ��� �����ڸ� �ҹ��ڷ� ��ȯ�ϴ� stringlow()
	��� �빮�ڸ� �ҹ��ڷ� ��ȯ�ϴ� stringup()
	���ڿ��� �־����� ���ڰ� �⿬�ϴ� Ƚ�� (char �Ű�����)
	*/
	friend Stringg operator+(const char* s, Stringg& st2);
	/*friend Stringg operator+(Stringg& st1, Stringg& st2);*/
	void stringlow();
	void stringup();
	int charcount(char word);

	static int HowMany();
};