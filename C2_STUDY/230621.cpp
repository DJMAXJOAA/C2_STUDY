#include "all.h"
using namespace std;

//#include "tv.h"
//int main()
//{
//	Tv s42;
//	cout << "42\" TV의 초기 설정값: \n";
//	s42.settings();
//	s42.onoff();
//	s42.chanup();
//	cout << "42\" TV의 변경된 설정값: \n";
//	s42.settings();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n리모콘 사용 후 42\" TV의 설정값 : \n";
//	s42.settings();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" TV의 설정값: \n";
//	s58.settings();
//	return 0;
//}

//#include "queuetpp.h"
//int main()
//{
//	QueueTP<string> cs(5);
//	string temp;
//
//	while (!cs.isfull())
//	{
//		cout << "이름을 입력하십시오. 도착하신 순서대로 사은품을 드립니다.\n";
//		cout << "이름: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "큐가 가득 찼으므로, 지그부터 사은품을 나누어 드리겠습니다.\n";
//	while (!cs.isempty())
//	{
//		cs.dequeue(temp);
//		cout << temp << "님! 감사합니다. 안녕히 가십시오.\n";
//	}
//	return 0;
//}

//#include "exc_mean.h"
//double hmean(double a, double b) throw(bad_hmean);
//double gmean(double a, double b) throw(bad_gmean);
//int main()
//{
//	double x, y, z;
//	cout << "두 수를 입력하십시오: ";
//	while (cin >> x >> y)
//	{
//		try
//		{
//			z = hmean(x, y);
//			cout << x << ", " << y << "의 조화 평균은 " << z << "입니다.\n";
//			cout << x << ", " << y << "의 기하 평균은 " << gmean(x,y) << "입니다.\n";
//			cout << "다른 두 수를 입력하세요 (끝내기 q) : ";
//		}
//		catch (bad_hmean &bg)
//		{
//			bg.mesg();
//			cout << "다시 하십시오.\n";
//			continue;
//		}
//		catch (bad_gmean& hg)
//		{
//			cout << hg.mesg();
//			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//			cout << "죄송합니다. 더이상 진행이 안댑니다\n";
//			break;
//		}
//		
//	}
//	cout << "프로그램 종료합니다. \n";
//
//	return 0;
//}
//
//double hmean(double a, double b) throw(bad_hmean)
//{
//	if (a == -b)
//	{
//		throw bad_hmean(a, b);
//	}
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b) throw(bad_gmean)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean(a, b);
//	return sqrt(a * b);
//}


//#include "0621.h"
//int main()
//{
//	int number = 0;
//	try
//	{
//		ThrowTest(number);
//	}
//	catch (exception& a)
//	{
//		cout << a.what() << endl;
//	}
//	return 0;
//}

struct Big
{
	double stuff[20000];
};

int main()
{
	Big* pb;
	try
	{
		cout << "큰 메모리 블록 대입을 요청하고 있습니다.\n";
		pb = new Big[10000];
		cout << "메모리 블럭 대입 요청이 거부되었습니다\n";
	}
	catch (bad_alloc& ba)
	{
		cout << "예외가 감지되었습니다!\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "메모리 블럭이 성공적으로 대입되었습니다.\n";
	pb[0].stuff
}