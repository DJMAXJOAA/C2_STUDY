#include "all.h"
using namespace std;

//#include "functor.h"
//int main()
//{
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int>etcetera(vals, vals + 10);
//	cout << "������ ����Ʈ:\n";
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
//	cout << "���� �ε��� ����: \n";
//	int i;
//	for (i = 1; i <= len; i++)
//	{
//		cout.write(state2, i);
//		cout << endl;
//	}
//	cout << "���� �ε��� ���� : \n";
//	for (i = len; i > 0; i--)
//	{
//		cout.write(state2, i) << endl;
//	}
//	cout << "���ڿ� ���� �ʰ�: \n";
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
//	cout << "��������\n";
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
//	cout << "��������\n";
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
//	cout << "������ ����\n";
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
//	cout << "�� : ";
//	int sum = 0;
//	int input;
//	while (cin>>input)
//	{
//		sum += input;
//	}
//	cout << "������ �Է� ��: " << input << endl;
//	cout << "�հ�: " << sum;
//	return 0;
//}

//int main()
//{
//	string filename;
//
//	cin >> filename;
//	ofstream fout(filename.c_str());
//	
//	fout << "��������\n";
//	cout << "��!\n";
//	float secreat;
//	cin >> secreat;
//	fout << secreat;
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << "�� ���� : \n";
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
//		cout << file << "������ ���� ����: \n";
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
//		cerr << "��¤��� ����" << file << "������ �� �� ������ϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//	cout << "���ο� �մ�\n";
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
//		cout << file << "�� ������ ������ �̴̰ϴ�\n";
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
		cout << file << "�� ���� ����:\n";
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
			cerr << file << " ������ �дٰ� ���� �߻�\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << file << " ������ �� �� �������ϴ�.\n";
		exit(EXIT_FAILURE);
	}

	cout << "������ ���ڵ� ��ȣ�� �Է��Ͻÿ�: ";
	long rec;
	cin >> rec;
	eatline(); // ���๮�� ���ֱ�
	if (rec < 0 || rec >= ct)
	{
		cerr << "�߸��� ���ڵ��Դϴ�. ����\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if (finout.fail())
	{
		cerr << "���ڵ带 ã�ٰ� ���� �߻�.\n";
		exit(EXIT_FAILURE);
	}
	
	finout.read((char*)&pl, sizeof pl);
	cout << "���� ���ڵ��� ����: \n";
	cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12)
		<< pl.population << setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "�༺ �̸��� �Է��ϼ���: ";
	cin.get(pl.name, LIM);
	eatline();
	cout << "�༺�� �α��� �Ӥ������Ͻʽÿ�: ";
	cin >> pl.population;
	cout << "�༺�� �߷°��ӵ� �Է� : ";
	cin >> pl.g;

	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if (finout.fail())
	{
		cerr << "���ٰ� ���� �߻�\n";
		exit(EXIT_FAILURE);
	}

	//������ ����
	ct = 0;
	finout.seekg(0);
	cout << file << " ������ ������ ������ ������ �����ϴ�. : \n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12)
			<< pl.population << setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "���α׷��� �����ٴϴ�.\n";
	return 0;
}
