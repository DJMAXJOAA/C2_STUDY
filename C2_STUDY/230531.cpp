#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // ���� �����

using namespace std;

/* ���� ����� */
//int main()
//{
//	/* 1. ��¿� ���� ��ü ���� */
//	ofstream outfile;
//
//	/* 2. ��� ���� ���� */
//	outfile.open("ccc.txt");
//
//	/* 3. ���� ���� ���� */
//	outfile << "asdfasdfasdf" << endl;
//
//	/* 4. ���� �ݱ� */
//	outfile.close();
//
//	return 0;
//}

/* ���� ��� */
//int main()
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "�ڵ����� ����Ŀ�� ������ �Է��Ͻÿ� : ";
//	cin.getline(automobile, 50);
//
//	cout << "������ �Է��Ͻÿ� : ";
//	cin >> year;
//
//	cout << "���� ������ �Է��Ͻÿ� : ";
//	cin >> a_price;
//	
//	d_price = 0.913 * a_price;
//
//	// cout�� ��ũ���� ������ ���÷���
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);	// �Ҽ��� �ε����� ����
//	cout << "����Ŀ�� ���� : " << automobile << endl;
//	cout << "���� : " << year << endl;
//	cout << "���԰��� $" << a_price << endl;
//	cout << "���簡�� $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);	// �Ҽ��� �ε����� ����
//	outFile << "����Ŀ�� ���� : " << automobile << endl;
//	outFile << "���� : " << year << endl;
//	outFile << "���԰��� $" << a_price << endl;
//	outFile << "���簡�� $" << d_price << endl;
//
//	outFile.close();
//	return 0;
//}

//int main()
//{
//	ifstream infile;
//	infile.open("ccc.txt");
//	if (!infile.is_open())
//	{
//		cout << "���� �ҷ����� ����" << endl;
//		return 0;
//	}
//	string str;
//	infile >> str;
//	cout << str << endl;
//
//	return 0;
//}


//int main()
//{
//	const int SIZE = 60;
//
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "������ ������ �̸��� �Է��Ͻÿ� : ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << filename << "������ �� �� �����ϴ�." << endl;
//		cout << "���α׷��� �����մϴ�." << endl;
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	if (inFile.eof())
//	{
//		cout << "���� ���� �����߽��ϴ�\n";
//	}
//	else if (inFile.fail())
//	{
//		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
//	}
//	else
//	{
//		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";
//	}
//	
//
//	if (count == 0)
//	{
//		cout << "�����Ͱ� �����ϴ�.\n";
//	}
//	else
//	{
//		cout << "���� �׸��� ���� : " << count << endl;
//		cout << "�հ� : " << sum << endl;
//		cout << "��� : " << sum / count << endl;
//	}
//	
//	inFile.close();
//
//	return 0;
//}

//int main()
//{
//	cout << "�м��� �׽�Ʈ�� �Է��Ͻʽÿ�.\n";
//	cout << "�Է��� ���� @���� ǥ���Ͻʽÿ�.\n";
//
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@')
//	{
//		if (isalpha(ch)) // �������ΰ�?
//		{
//			chars++;
//		}
//		else if (isspace(ch)) // �����ΰ�?
//		{
//			whitespace++;
//		}
//		else if (isdigit(ch)) // �����ΰ�?
//		{
//			digits++;
//		}
//		else if (ispunct(ch)) // �������ΰ�?
//		{
//			punct++;
//		}
//		else others++;
//
//		cin.get(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	const int max = 5;
//
//	int golf[max];
//	cout << "���� ����\n";
//	cout << max;
//	int i;
//	for (i = 0; i < max; i++)
//	{
//		cout << "round" << i;
//		
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//			cout << "���� ���� �Է� : ";
//		}
//	}
//}

int main()
{
	vector<char> v2(15);
	vector<vector<char>> v1(5, v2);
	
	for (int i = 0; i < 5; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.size(); j++)
		{
			v1[i][j] = temp[j];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << v1[j][i];
		}
	}
}