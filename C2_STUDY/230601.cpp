#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // 파일 입출력
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
//	cout << "먹은 과자 수 합계 : " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "처음 세사람은 과자 " << sum << "개를 먹었습니다" << endl;
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "마지막 네사람은 과자 " << sum << "개를 먹었습니다";
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
//	const char* wail = "ulualate"; // 문자열 변경 불가
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "에는 m이" << ms << "개 들어 있습니다\n";
//	cout << wail << "에는 u가" << us << "개 들어있습니다\n";
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
//	cout << "x값과 y값을 입력하시오 : ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "x값과 y값을 입력하시오(끝내려면 q를 입력) : ";
//	}
//	cout << "프로그램을 종료합니다\n";
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
//	cout << "거리 = " << dapos.distance;
//	cout << ", 각도 = " << dapos.angle * Rad_to_deg;
//	cout << "도\n";
//}


/* 재귀 */
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


/* 함수 포인터 실무 예시 */
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

/* 세개 다 같은 표현 */
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2;

	cout << "함수포인터\n";
	cout << "주소 값\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	// 포인터들의 배열 pa
	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa;
	cout << "\n함수 포인터를 원소로 가지는 배열:\n";
	cout << "주소 값\n";

	for (int i = 0; i < 3; i++)
	{
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
		cout << "\n함수 포인터를 가리키는 포인터: \n";
		cout << "주소 값\n";
	}

	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	}

	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터: \n";
	cout << "주소 값\n";

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
