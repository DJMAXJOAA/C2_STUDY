#include "all.h"
using namespace std;

//#include "functor.h"
//int main()
//{
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int>etcetera(vals, vals + 10);
//	cout << "워낼의 리스트:\n";
//	for_each(yadayada.begin(), yadayada.end());
//	return 0;
//}

//template <typename T>
//void print_deque(deque<T>& dq)
//{
//	for (const auto& x : dq)
//		cout << x << " ";
//	cout << endl;
//}
//
//int main()
//{
//	deque<int> dq;
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//	dq.push_back(40);
//	
//	print_deque(dq);
//
//	dq.pop_front();
//	print_deque(dq);
//
//	return 0;
//}

//int main()
//{
//	const char* state1 = "Florida";
//	const char* state2 = "Kansas";
//	const char* state3 = "Euphoria";
//	int len = strlen(state2);
//	cout << "루프 인덱스 증가: \n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//	cout << "루프 인덱스 감소 : \n";
//	for (i = len; i > 0; i--)
//	{
//		cout.write(state2, i) << endl;
//	}
//	cout << "문자열 길이 초과: \n";
//	cout.write(state2, len + 5) << endl;
//	return 0;
//}
//
//int main()
//{
//	cout.setf(ios_base::left, ios_base::adjustfield);
//	cout.setf(ios_base::showpos);
//	cout.setf(ios_base::showpoint);
//	cout.precision(3);
//
//	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
//	cout << "왼쪽정렬\n";
//	long n;
//	for ( n = 1; n <= 41; n+=10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::internal, ios_base::adjustfield);
//	cout.setf(old, ios_base::floatfield);
//
//	cout << "내부정렬\n";
//	for ( n = 1; n <= 41; n+=10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//
//	cout.setf(ios_base::right, ios_base::adjustfield);
//	cout.setf(old, ios_base::floatfield);
//
//	cout << "오른쪽 정렬\n";
//	for (n = 1; n <= 41; n += 10)
//	{
//		cout.width(4);
//		cout << n << "|";
//		cout.width(12);
//		cout << sqrt(double(n)) << "|\n";
//	}
//	return 0;
//}

//int main()
//{
//	cout << "수 : ";
//	int sum = 0;
//	int input;
//	while (cin>>input)
//	{
//		sum += input;
//	}
//	cout << "마지막 입력 값: " << input << endl;
//	cout << "합계: " << sum;
//	return 0;
//}

//int main()
//{
//	string filename;
//
//	cin >> filename;
//	ofstream fout(filename.c_str());
//	
//	fout << "ㅁㄴㅇㄹ\n";
//	cout << "헉!\n";
//	float secreat;
//	cin >> secreat;
//	fout << secreat;
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << "의 내용 : \n";
//	char ch;
//	while (fin.get(ch))
//	{
//		cout << ch;
//	}
//	fin.close();
//
//	return 0;
//}

//const char* file = "guests.txt";
//int main()
//{
//	char ch;
//
//	ifstream fin;
//	fin.open(file);
//
//	if (fin.is_open())
//	{
//		cout << file << "파일의 현재 내용: \n";
//		while (fin.get(ch))
//		{
//			cout << ch;
//		}
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out | ios_base::app);
//	if (!fout.is_open())
//	{
//		cerr << "출력ㅇ르 위해" << file << "파일을 열 수 없ㅅ브니다.\n";
//		exit(EXIT_FAILURE);
//	}
//	cout << "새로운 손님\n";
//	string name;
//	while (getline(cin, name) && name.size() > 0)
//	{
//		fout << name << endl;
//	}
//	fout.close();
//
//	fin.clear();
//	fin.open(file);
//	if (fin.is_open())
//	{
//		cout << file << "의 개정된 내요은 이겁니다\n";
//		while (fin.get(ch))
//		{
//			cout << ch;
//		}
//		fin.close();
//	}
//	return 0;
//}


const int LIM = 20;

inline void eatline()
{
	while (cin.get() != '\n')
	{
		continue;
	}
}

struct planet
{
	char name[LIM];
	double population;
	double g;
};

const char* file = "planets.dat";

int main()
{
	planet pl;
	cout << fixed;

	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;

	if (finout.is_open())
	{
		finout.seekg(0);
		cout << file << "의 현재 내용:\n";
		while (finout.read((char*)&pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
		{
			finout.clear();
		}
		else
		{
			cerr << file << " 파일을 읽다가 에러 발생\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " 파일을 열 수 업ㅎ습니다.\n";
		exit(EXIT_FAILURE);
	}

	cout << "수정할 레코드 번호를 입력하시오: ";
	long rec;
	cin >> rec;
	eatline(); // 개행문자 없애기
	if (rec < 0 || rec >= ct)
	{
		cerr << "잘못된 레코드입니다. 종료\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "레코드를 찾다가 에러 발생.\n";
		exit(EXIT_FAILURE);
	}
	
	finout.read((char*)&pl, sizeof pl);
	cout << "현재 레코드의 내용: \n";
	cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12)
		<< pl.population << setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "행성 이름을 입력하세요: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "행성의 인구를 ㅣㅇㅂ력하십시오: ";
	cin >> pl.population;
	cout << "행성의 중력가속도 입력 : ";
	cin >> pl.g;

	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "쓰다가 에러 발생\n";
		exit(EXIT_FAILURE);
	}

	//개정된 파일
	ct = 0;
	finout.seekg(0);
	cout << file << " 파일의 개정된 내용은 다음과 같습니다. : \n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12)
			<< pl.population << setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "프로그램을 종룧바니다.\n";
	return 0;
}
