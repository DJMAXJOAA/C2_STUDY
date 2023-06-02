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

//int main()
//{
//	int rats = 101;
//	int& rodents = rats;
//
//	/* 값이 서로 동일하다 */
//	cout << rats << "," << rodents << endl;
//
//	/* 주소값도 동일하다 */
//	cout << &rats << "," << & rodents << endl;
//
//	int bunnies = 50;
//	/* rats = bunnies와 동일하다 */
//	rodents = bunnies;
//	/* 결과는 모두 50 */
//	cout << bunnies << endl;
//	cout << rats << endl;
//	cout << rodents << endl;
//
//	return 0;
//}

//
//void swapr(int& a, int& b);
//void swapp(int* a, int* b);
//void swap(int a, int b);
//
//int main()
//{
//	int wallet1 = 3000;
//	int wallet2 = 3500;
//
//	cout << wallet1 << endl;
//	cout << wallet2 << endl;
//	cout << endl;
//
//	swapr(wallet1, wallet2);
//	cout << wallet1 << endl;
//	cout << wallet2 << endl;
//	cout << endl;
//
//	swapp(&wallet1, &wallet2);
//	cout << wallet1 << endl;
//	cout << wallet2 << endl;
//	cout << endl;
//
//	swap(wallet1, wallet2);
//	cout << wallet1 << endl;
//	cout << wallet2 << endl;
//	cout << endl;
//
//	return 0;
//}
//
//void swapr(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

/* 구조체 참조 */
//struct free_throws
//{
//	string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void display(const free_throws& ft);
//void set_pc(free_throws& ft);
//free_throws& accumulate(free_throws& target, const free_throws& source);
//
//int main()
//{
//	free_throws one = { "Ifelsa Branch", 13, 14 };
//	free_throws two = { "Andor Knott", 10, 16 };
//	free_throws three = { "Minnie Max", 7, 9 };
//	free_throws four = { "Whilly Looper", 5, 9 };
//	free_throws five = { "Long Long", 6, 14 };
//	free_throws team = { "Throwgoods",0, 0 };
//
//	free_throws dup;
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//
//	dup = accumulate(team, five);
//	cout << "team 출력 : \n";
//	display(team);
//	cout << "대입 이후 dup 출력 : \n";
//	display(dup);
//	set_pc(four);
//
//	accumulate(dup, five);
//	cout << "문제 소지가 있는 대입 이후 dup 출력 : \n";
//	display(dup);
//
//	return 0;
//}
//
//void display(const free_throws& ft)
//{
//	cout << "Name : " << ft.name << endl;
//	cout << "Made : " << ft.made << endl;
//	cout << "Attempts : " << ft.attempts << endl;
//	cout << "Percent : " << ft.percent << endl;
//}
//
//void set_pc(free_throws& ft)
//{
//	if (ft.attempts != 0)
//	{
//		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
//	}
//	else
//	{
//		ft.percent = 0;
//	}
//}
//
//free_throws& accumulate(free_throws& target, const free_throws& source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}


//string version1(const string& s1, const string& s2);
//const string& version2(string& s1, const string& s2);
//const string& version3(string& s1, const string& s2);
//
//int main()
//{
//	string input;
//	string copy;
//	string result;
//
//	cout << "문자열을 입력하시오 : ";
//	getline(cin, input);
//	copy = input;
//	cout << "입력한 문자열 : " << input << endl;
//	result = version1(input, "***");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	result = version2(input, "###");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	cout << "원래 문자열 재설정\n";	// 안댐
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "바뀐 문자열: " << result << endl;
//	cout << "원래 문자열: " << input << endl;
//
//	return 0;
//}
//
//string version1(const string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string& version2(string& s1, const string& s2)
//{
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
//const string& version3(string& s1, const string& s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}

/* 디폴트 */
//void Output(string str = "None");
//void Output2(int number ,string str = "None");
//
//int main()
//{
//	/* 값이 없어도 None 출력 */
//	Output();
//
//	/* 매개변수가 여러개라면, 디폴트 제외한 매개변수의
//	개수를 맞춰주어야 한다 */
//	Output2(10);
//
//	return 0;
//}
//
//void Output(string str)
//{
//	cout << str;
//}
//
//void Output2(int number, string str)
//{
//	cout << number << endl;
//	cout << str;
//}

//unsigned long left(unsigned long num, unsigned ct);
//char* left(const char* str, int n = 1);
//
//int main()
//{
//	const char* trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char* temp;
//	for (i = 1; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;
//	}
//	return 0;
//}
//
//unsigned long left(unsigned long num, unsigned ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)
//	{
//		return 0;
//	}
//	while (n/=10)
//	{
//		digits++;
//	}
//	if (digits > ct)
//	{
//		while (ct--)
//		{
//			num /= 10;
//		}
//		return num;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//char* left(const char* str, int n)
//{
//	if (n<0)
//	{
//		n = 0;
//	}
//	char* p = new char[n + 1];
//
//	int i;
//	for (i = 0; i < n&&str[i]; i++)
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)
//	{
//		p[i++] = '\0';
//	}
//	return p;
//}

//template <typename T>
//void Swap(T& a, T& b);
//
///* 한번 사용하면 템플릿 추가 */
//template <typename T>
//void Swap(T* a, T* b, int n);
//
//void Show(int a[]);
//const int Lim = 8;
//
//int main()
//{
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
//	Swap(i, j);
//	cout << "i, j = " << i << ", " << j << ".\n";
//
//	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
//	int d2[Lim] = { 0,6,2,0,1,9,6,9 };
//
//	cout << "원본 배열\n";
//	Show(d1);
//	Show(d2);
//	Swap(d1, d2, Lim);	// 추가 템플릿 사용
//	cout << "교환된 배열 : \n";
//	Show(d1);
//	Show(d2);
//
//	return 0;
//}
//
///* 함수 원형에도 템플릿 붙이기 */
//template<typename T>
//void Swap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void Swap(T a[], T b[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		T temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void Show(int a[])
//{
//	cout << a[0] << a[1] << "/";
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//}

template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <>
void Swap<job>(job &j1, job &j2);

void Show(job& j);

int main()
{
	cout.precision(2);		// 부동소수점 2자리
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	printf("i, j = %d, %d\n", i, j);
	cout << "컴파일러가 생성한 int형 교환기를 사용하려면\n";
	Swap(i, j);
	printf("i, j = %d, %d\n", i, j);

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee", 78060.72, 9 };

	cout << "job 교환 전 : \n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);

	cout << "job 교환 후 : \n";
	Show(sue);
	Show(sidney);
	return 0;
}

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<>
void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	cout << j.name << " : " << j.floor << "층에 거주" << endl;
	cout << "$ " << j.salary << endl;
}
