#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath> // sqrt 사용
#include <cstring>
#include <string>

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



int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << p3[1] << endl;
	p3 = p3 + 1;
	cout << p3[0] << "," << p3[1] << endl;

	p3 = p3 - 1;
	cout << p3[0] << "," << p3[1] << endl;

	delete[] p3;
	_CrtDumpMemoryLeaks();
	return 0;
}