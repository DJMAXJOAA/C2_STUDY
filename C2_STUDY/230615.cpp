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
//	cout << "�ȳ��Ͻʴϱ�? ������ ���ɵǳ���\n";
//	cin >> name;
//
//	cout << name << "��, ������ �츮 �Ӵ�" << ArSize
//		<< "���� �Է����ּ��� (enter): \n";
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
//		cout << "������ ���� �Ӵ� �Է��� : \n";
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
//		cout << "���� ª�� �Ӵ�: \n" << *shortest << "\n";
//		cout << "���� ������ ���� �տ� ������ �Ӵ�: \n" << *first << endl;
//		srand(time(0));
//		int choice = rand() * total;
//
//		Stringg* favorite = new Stringg(sayings[choice]);
//		cout << "���� ���� �����ϴ� �Ӵ� : \n" << *favorite << endl;
//		delete favorite;
//	}
//	else
//		cout << "�˰� �ִ� �Ӵ��� ����?\n";
//	cout << "���α׷� ����\n";
//
//	return 0;
//}

using namespace std;

int main()
{
	Stringg s1(" and I am a C++ Student.");
	Stringg s2 = "���� �̸��� �Է��ϼ��� : ";
	Stringg s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "���� ���ڿ�����\n" << s2 << "\n���� 'A'��"
		<< s2.charcount('A') << "�� ����ֽ��ϴ�.\n";
	s1 = "red";
	Stringg rgb[3] = { Stringg(s1), Stringg("green"), Stringg("blue") };
	cout << "���� ����� �̸� �ϳ� : ";
	Stringg ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "�¾ҽ��ϴ�\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "�ٽ� �Է��Ͻÿ�: ";
	}
	cout << "���α׷� ����\n";

	return 0;
}