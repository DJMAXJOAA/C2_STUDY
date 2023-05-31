#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath> // sqrt 사용
#include <cstring>
#include <string>
#include <vector>

using namespace std;


//int main()
//{
//	double earnings[4] = { 1.1 , 1.3, 1.4e4, 1.7 };
//
//	cout << "Hello C++!" << endl;
//	INT_MAX;
//
//	int a(10);
//
//	return 0;
//}

/* string */
//int main()
//{
//	const int ArSize = 20;                 
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "이름을 입력하세요" << endl;
//	cin >> name;
//	cout << "좋아하는 디저트를 입력하시오" << endl;
//	cin >> dessert;
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다 " << name << "님!" << endl;
//	return 0;
//}


//int main()
//{
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//
//	cout << "이름을 입력하세요" << endl;
//	cin.get(name, 5).get();	// 개행문자까지 읽는다
//	cout << "좋아하는 디저트를 입력하시오" << endl;
//	cin.get(dessert, 5).get();
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다 " << name << "님!" << endl;
//
//	return 0;
//}


/* string 클래스 */
//int main()
//{
//	string str1 = "hello C++";
//	string str2 = " World!";
//	str1 += str2;
//
//	cout << str1;
//
//	return 0;
//}

/* string 클래스 대입 */
//int main()
//{
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "string 객체를 string 객체에 대입할 수 있다 : s2 = s1" << endl;
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "string 객체에 C 스타일 문자열을 대입할 수 있다" << endl;
//	cout << "s2 = \"buzzard\"" << endl;
//	s2 = "buzzard";
//	cout << "s2 : " << s2 << endl;
//	cout << "string 객체들을 결합할 수 있다 : s3 = s1 + s2" << endl;
//	s3 = s1 + s2;
//	cout << "s3 : " << s3 << endl;
//	cout << "string 객체들을 추가 할 수 있다." << endl;
//	s1 += s2;
//	cout << "s1 += s2 --> s1 = " << s1 << endl;
//	s2 += " for a day";
//	cout << "s2 += \"for a day\" --> " << s2 << endl;
//
//	return 0;
//}

/* new 동적할당 */
//int main()
//{
//	int* pInt;
//	pInt = (int*)malloc(sizeof(int) * 128);
//	free(pInt);
//	
//	pInt = new int[128];
//	delete[] pInt; // 배열아니면 delete pInt;
//
//	pInt = new int;
//	if (pInt)
//		*pInt = 1004;
//	if (pInt)
//		delete pInt;
//}

/* 메모리 누수 확인 */
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//	double* p3 = new double[3];
//
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//
//	cout << p3[1] << endl;
//	p3 = p3 + 1;
//	cout << p3[0] << "," << p3[1] << endl;
//
//	p3 = p3 - 1;
//	cout << p3[0] << "," << p3[1] << endl;
//
//	delete[] p3;
//	_CrtDumpMemoryLeaks();
//	return 0;
//}

/* 포인터 확인 */
//int main()
//{
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//	short stacks[3] = { 3, 2, 1 };
//
//	double* pw = wages;
//	short* ps = &stacks[0];
//
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//	pw = pw + 1;
//	cout << "pw 포인터에 1을 더함 : " << endl;
//	cout << "pw = " << pw << ", *pw = " << *pw << endl;
//
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//	ps = ps + 1;
//	cout << "ps 포인터에 1을 더함 : " << endl;
//	cout << "ps = " << ps << ", *ps = " << *ps << endl;
//
//	cout << "배열 표기로 두 원소에 접근" << endl;
//	cout << "stacks[0] = " << stacks[0]
//		<< ", stacks[1] = " << stacks[1] << endl;
//	cout << "포인터 표기로 두 원소에 접근" << endl;
//	cout << "*stacks = " << *stacks
//		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
//
//	cout << sizeof(wages) << " = wages 배열의 크기" << endl;
//	cout << sizeof(pw) << "= pw 포인터의 크기" << endl;
//	return 0;
//}

/* delete */
//char* getname();
//
//int main()
//{
//	char* name;
//	name = getname();
//	cout << (int*)name << " : " << name << endl;
//	delete[] name;
//
//	name = getname();
//	cout << (int*)name << " : " << name << endl;
//	delete[] name;
//
//	return 0;
//}
//
//char* getname()
//{
//	char temp[80];
//	cout << "이름을 입력하세요 : ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}

int main()
{
	vector<int> vi;

	vi.push_back(1);
	vi.push_back(2);

	cout << vi[0] << endl;
	cout << vi[1] << endl;

	return 0;
}