#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>
#include <new> // ��ġ���� new

using namespace std;
//
//int global = 100;
//
//int main()
//{
//	int global = 9;
//	/* 9 ��� */
//	cout << global << endl;
//	/* 100 ��� */
//	cout << ::global << endl;
//
//	return 0;
//}

//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//
//int main()
//{	
//	double* pd1, * pd2;
//	int i;
//	cout << "new�� ��ġ ���� new�� ù��° ȣ�� : \n";
//	pd1 = new double[N];
//	pd2 = new(buffer)double[N];
//	for ( i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//	cout << "�޸� �ּ� : \n" << pd1 << " : ��"
//		<< (void*)buffer << " : ����" << endl;
//
//	cout << "�޸� ���� : \n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "�� " << pd1[i] << "; ";
//		cout << &pd2[i] << "�� " << pd2[i] << endl;
//	}
//
//	cout << "\nnew�� ��ġ ���� new �� �ι�° ȣ�� : \n";
//	double* pd3, * pd4;
//	pd3 = new double[N];
//	pd4 = new(buffer) double[N];
//
//	for ( i = 0; i < N; i++)
//	{
//		pd4[i] = pd3[i] = 1000 + 4.0 * i;
//	}
//
//	cout << "�޸� ���� : \n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << &pd3[i] << "�� " << pd3[i] << "; ";
//		cout << &pd4[i] << "�� " << pd4[i] << endl;
//	}
//
//	cout << "\nnew�� ��ġ ���� new�� ����° ȣ�� : \n";
//	delete[] pd1;
//	pd1 = new double[N];
//	pd2 = new(buffer + N * sizeof(double)) double[N];
//	for ( i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//
//	cout << "�޸� ���� : \n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "�� " << pd1[i] << "; ";
//		cout << &pd2[i] << "�� " << pd2[i] << endl;
//	}
//	delete[] pd1;
//	delete[] pd3;
//		
//	return 0;
//}

//namespace Jack
//{
//	double pail;
//}
//
//namespace Jill
//{
//	double pail;
//}
//
//int main()
//{
//	Jack::pail = 5;
//	Jill::pail = 10;
//	/* �迡 �ִ� pail�� ��� */
//	using Jack::pail;
//	/* �������� ����ϴ°Ŵϱ� �����Ϸ����� ������ ���� */
//	//using Jill::pail;
//	cin >> pail;
//	cout << pail;
//
//	return 0;
//}

