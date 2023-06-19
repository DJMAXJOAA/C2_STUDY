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

using namespace std;

class MyWallet
{
public:
	MyWallet(int m);
	~MyWallet();

	/* ���������� �� Ŭ������ ���ϴ� �Լ��� �ƴϴ�
	�ܺκ������� MyWallet�� private �����Ϳ� ���� ���� */
	friend int getMoney(MyWallet& t);

private:
	int money;
};

MyWallet::MyWallet(int m) : money(m)
{
}

MyWallet::~MyWallet()
{
}

/* ������� �ܺ� �Լ��ε��� ���� ���� */
int getMoney(MyWallet& t)
{
	return t.money;
}

/* �����尡 �ƴϴϱ� ���� �Ұ�, ��� �ȴ� */
int yourMoney(MyWallet& t)
{
	return t.money;
}

int main()
{
	MyWallet wal(1);


	return 0;
}