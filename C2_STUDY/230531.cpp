#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <fstream> // 파일 입출력

using namespace std;

/* 파일 입출력 */
//int main()
//{
//	/* 1. 출력용 파일 객체 선언 */
//	ofstream outfile;
//
//	/* 2. 출력 파일 열기 */
//	outfile.open("ccc.txt");
//
//	/* 3. 파일 내용 쓰기 */
//	outfile << "asdfasdfasdf" << endl;
//
//	/* 4. 파일 닫기 */
//	outfile.close();
//
//	return 0;
//}

/* 파일 출력 */
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
//	cout << "자동차의 메이커와 차종을 입력하시오 : ";
//	cin.getline(automobile, 50);
//
//	cout << "연식을 입력하시오 : ";
//	cin >> year;
//
//	cout << "구입 가격을 입력하시오 : ";
//	cin >> a_price;
//	
//	d_price = 0.913 * a_price;
//
//	// cout로 스크린에 정보를 디스플레이
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);	// 소수점 부동문자 단위
//	cout << "메이커와 차종 : " << automobile << endl;
//	cout << "연식 : " << year << endl;
//	cout << "구입가격 $" << a_price << endl;
//	cout << "현재가격 $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);	// 소수점 부동문자 단위
//	outFile << "메이커와 차종 : " << automobile << endl;
//	outFile << "연식 : " << year << endl;
//	outFile << "구입가격 $" << a_price << endl;
//	outFile << "현재가격 $" << d_price << endl;
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
//		cout << "파일 불러오기 실패" << endl;
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
//	cout << "데이터 파일의 이름을 입력하시오 : ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << filename << "파일을 열 수 없습니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
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
//		cout << "파일 끝에 도달했습니다\n";
//	}
//	else if (inFile.fail())
//	{
//		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
//	}
//	else
//	{
//		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
//	}
//	
//
//	if (count == 0)
//	{
//		cout << "데이터가 없습니다.\n";
//	}
//	else
//	{
//		cout << "읽은 항목의 개수 : " << count << endl;
//		cout << "합계 : " << sum << endl;
//		cout << "평균 : " << sum / count << endl;
//	}
//	
//	inFile.close();
//
//	return 0;
//}

//int main()
//{
//	cout << "분석할 테스트를 입력하십시오.\n";
//	cout << "입력의 끝을 @으로 표시하십시오.\n";
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
//		if (isalpha(ch)) // 영문자인가?
//		{
//			chars++;
//		}
//		else if (isspace(ch)) // 공백인가?
//		{
//			whitespace++;
//		}
//		else if (isdigit(ch)) // 숫자인가?
//		{
//			digits++;
//		}
//		else if (ispunct(ch)) // 구두점인가?
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
//	cout << "골프 점수\n";
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
//			cout << "골프 점수 입력 : ";
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