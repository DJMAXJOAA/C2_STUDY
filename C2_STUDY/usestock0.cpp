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
	cout << "�����ڸ� ����Ͽ� ���ο� ��ü���� �����Ѵ�.\n";
	Stock stock1("NanoSmart", 12, 20.0); // ù��° ���� ���
	stock1.show();
	Stock stock2 = Stock("Boffo Objects", 2, 2.0); // �ι�° ���� ���
	stock2.show();

	cout << "stock1�� stock2�� �����Ѵ�.\n";
	stock2 = stock1;	// Ŭ������ ����
	cout << "stock1�� stock2�� ����Ѵ�.\n";
	stock1.show();
	stock2.show();

	cout << "�����ڸ� ����Ͽ� ��ü�� �缳���Ѵ�.\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "���ŵ� stock1:\n";
	stock1.show();
	cout << "���α׷� ����\n";
	}
	return 0;
}