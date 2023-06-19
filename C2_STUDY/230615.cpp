#include "all.h"
#include "string1.h"
//const int ArSize = 10;
//const int MaxLen = 81;
//
//using namespace std;
//
//int main()
//{
//	Stringg name;
//	cout << "안녕하십니까? 성함이 어케되나요\n";
//	cin >> name;
//
//	cout << name << "씨, 간단한 우리 속담" << ArSize
//		<< "개만 입력해주세용 (enter): \n";
//	Stringg sayings[ArSize];
//	char temp[MaxLen];
//	int i;
//	for ( i = 0; i < ArSize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin && cin.get() != '\n')
//		{
//			continue;
//		}
//		if (!cin || temp[0] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			sayings[i] = temp;
//		}
//	}
//	int total = i;
//
//	if (total > 0)
//	{
//		cout << "다음과 같은 속담 입력함 : \n";
//		for (i = 0; i < total; i++)
//		{
//			cout << sayings[i] << "\n";
//		}
//		Stringg* shortest = &sayings[0];
//		Stringg* first = &sayings[0];
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < shortest->length())
//			{
//				shortest = &sayings[i];
//			}
//			if (sayings[i] < *first)
//			{
//				first = &sayings[i];
//			}
//		}
//		cout << "가장 짧은 속담: \n" << *shortest << "\n";
//		cout << "사전 순으로 가장 앞에 나오는 속담: \n" << *first << endl;
//		srand(time(0));
//		int choice = rand() * total;
//
//		Stringg* favorite = new Stringg(sayings[choice]);
//		cout << "내가 가장 좋아하는 속담 : \n" << *favorite << endl;
//		delete favorite;
//	}
//	else
//		cout << "알고 있는 속담이 없니?\n";
//	cout << "프로그램 종료\n";
//
//	return 0;
//}

using namespace std;

int main()
{
	Stringg s1(" and I am a C++ Student.");
	Stringg s2 = "영문 이름을 입력하세요 : ";
	Stringg s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "다음 문자열에는\n" << s2 << "\n문자 'A'가"
		<< s2.charcount('A') << "개 들어있습니다.\n";
	s1 = "red";
	Stringg rgb[3] = { Stringg(s1), Stringg("green"), Stringg("blue") };
	cout << "빛의 삼원색 이름 하나 : ";
	Stringg ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "맞았습니다\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "다시 입력하시오: ";
	}
	cout << "프로그램 종료\n";

	return 0;
}