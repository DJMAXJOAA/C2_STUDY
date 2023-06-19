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
#include "stock00.h"

using namespace std;

int main()
{
	{
	using std::cout;
	cout << "생성자를 사용하여 새로운 객체들을 생성한다.\n";
	Stock stock1("NanoSmart", 12, 20.0); // 첫번째 선언 방법
	stock1.show();
	Stock stock2 = Stock("Boffo Objects", 2, 2.0); // 두번째 선언 방법
	stock2.show();

	cout << "stock1을 stock2에 대입한다.\n";
	stock2 = stock1;	// 클래스의 대입
	cout << "stock1과 stock2를 출력한다.\n";
	stock1.show();
	stock2.show();

	cout << "생성자를 사용하여 객체를 재설정한다.\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "갱신된 stock1:\n";
	stock1.show();
	cout << "프로그램 종료\n";
	}
	return 0;
}