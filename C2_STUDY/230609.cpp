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

	/* 실질적으로 이 클래스에 속하는 함수가 아니다
	외부변수지만 MyWallet의 private 데이터에 접근 가능 */
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

/* 프렌드라 외부 함수인데도 접근 가능 */
int getMoney(MyWallet& t)
{
	return t.money;
}

/* 프렌드가 아니니까 접근 불가, 사용 안댐 */
int yourMoney(MyWallet& t)
{
	return t.money;
}

int main()
{
	MyWallet wal(1);


	return 0;
}