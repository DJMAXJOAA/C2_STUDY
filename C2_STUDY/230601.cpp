#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // ���� �����
#include <windows.h>

using namespace std;

/* asdf */
//const int ArSize = 8;
//int sum_arr(const int* begin, const int* end);
//
//int main()
//{
//	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	int sum = sum_arr(cookies, cookies + ArSize);
//	cout << "���� ���� �� �հ� : " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "ó�� ������� ���� " << sum << "���� �Ծ����ϴ�" << endl;
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "������ �׻���� ���� " << sum << "���� �Ծ����ϴ�";
//	
//	return 0;
//}
//
//int sum_arr(const int* begin, const int* end)
//{
//	const int* pt;
//	int total = 0;
//	for (pt = begin; pt != end; pt++)
//	{
//		total = total + *pt;
//	}
//
//	return total;
//}

//unsigned int c_in_str(const char* str, char ch);
//int main()
//{
//	char mmm[15] = "minimum";
//	const char* wail = "ulualate"; // ���ڿ� ���� �Ұ�
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "���� m��" << ms << "�� ��� �ֽ��ϴ�\n";
//	cout << wail << "���� u��" << us << "�� ����ֽ��ϴ�\n";
//
//	return 0;
//}
//
//unsigned int c_in_str(const char* str, char ch)
//{
//	int count = 0;
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			count++;
//		}
//		str++;
//	}
//
//	return count;
//}


/* asdfasdfasdf */
//struct polar
//{
//	double distance;
//	double angle;
//};
//
//struct rect
//{
//	double x;
//	double y;
//};
//
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//
//int main()
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "x���� y���� �Է��Ͻÿ� : ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "x���� y���� �Է��Ͻÿ�(�������� q�� �Է�) : ";
//	}
//	cout << "���α׷��� �����մϴ�\n";
//
//	return 0;
//}
//
//polar rect_to_polar(rect xypos)
//{
//	polar answer;
//
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	
//	return answer;
//}
//
//void show_polar(polar dapos)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "�Ÿ� = " << dapos.distance;
//	cout << ", ���� = " << dapos.angle * Rad_to_deg;
//	cout << "��\n";
//}


/* ��� */
//const int len = 66;
//const int divs = 6;
//void subdivide(char ar[], int low, int high, int level);
//
//int main()
//{
//	char ruler[len];
//	int i;
//	for (i = 1; i < len - 2; i++)
//	{
//		ruler[i] = ' ';
//	}
//	ruler[len - 1] = '\0';
//	int max = len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (i = 0; i <= divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < len-2; j++)
//		{
//			ruler[j] = ' ';
//		}
//	}
//
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}


/* �Լ� ������ �ǹ� ���� */
//void (*Update)();
//int Count = 0;
//void Render();
//void Plus();
//void Minus();
//
//int main()
//{
//	Update = Plus;
//	while (1)
//	{
//		Update();
//		Render();
//		Sleep(200);
//	}
//	return 0;
//}
//
//void Render()
//{
//	cout << Count << endl;
//}
//
//void Plus()
//{
//	Count++;
//	if (Count > 30)
//	{
//		Update = Minus;
//		cout << "Change Plus" << endl;
//	}
//}
//
//void Minus()
//{
//	Count--;
//	if (Count <= 0)
//	{
//		Update = Plus;
//		cout << "Change Plus" << endl;
//	}
//}

/* ���� �� ���� ǥ�� */
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2;

	cout << "�Լ�������\n";
	cout << "�ּ� ��\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	// �����͵��� �迭 pa
	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa;
	cout << "\n�Լ� �����͸� ���ҷ� ������ �迭:\n";
	cout << "�ּ� ��\n";

	for (int i = 0; i < 3; i++)
	{
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
		cout << "\n�Լ� �����͸� ����Ű�� ������: \n";
		cout << "�ּ� ��\n";
	}

	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	}

	cout << "\n�����͸� ���ҷ� ������ �迭�� ����Ű�� ������: \n";
	cout << "�ּ� ��\n";

	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	
	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);

	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;


	return 0;
}

const double* f1(const double *ar, int n)
{
	return ar;
}

const double* f2(const double ar[], int)
{
	return ar+1;
}

const double* f3(const double ar[], int)
{
	return ar+2;
}
