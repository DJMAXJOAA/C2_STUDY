#include "all.h"
using namespace std;

//#include "tv.h"
//int main()
//{
//	Tv s42;
//	cout << "42\" TV�� �ʱ� ������: \n";
//	s42.settings();
//	s42.onoff();
//	s42.chanup();
//	cout << "42\" TV�� ����� ������: \n";
//	s42.settings();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n������ ��� �� 42\" TV�� ������ : \n";
//	s42.settings();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" TV�� ������: \n";
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
//		cout << "�̸��� �Է��Ͻʽÿ�. �����Ͻ� ������� ����ǰ�� �帳�ϴ�.\n";
//		cout << "�̸�: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "ť�� ���� á���Ƿ�, ���׺��� ����ǰ�� ������ �帮�ڽ��ϴ�.\n";
//	while (!cs.isempty())
//	{
//		cs.dequeue(temp);
//		cout << temp << "��! �����մϴ�. �ȳ��� ���ʽÿ�.\n";
//	}
//	return 0;
//}

//#include "exc_mean.h"
//double hmean(double a, double b) throw(bad_hmean);
//double gmean(double a, double b) throw(bad_gmean);
//int main()
//{
//	double x, y, z;
//	cout << "�� ���� �Է��Ͻʽÿ�: ";
//	while (cin >> x >> y)
//	{
//		try
//		{
//			z = hmean(x, y);
//			cout << x << ", " << y << "�� ��ȭ ����� " << z << "�Դϴ�.\n";
//			cout << x << ", " << y << "�� ���� ����� " << gmean(x,y) << "�Դϴ�.\n";
//			cout << "�ٸ� �� ���� �Է��ϼ��� (������ q) : ";
//		}
//		catch (bad_hmean &bg)
//		{
//			bg.mesg();
//			cout << "�ٽ� �Ͻʽÿ�.\n";
//			continue;
//		}
//		catch (bad_gmean& hg)
//		{
//			cout << hg.mesg();
//			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//			cout << "�˼��մϴ�. ���̻� ������ �ȴ�ϴ�\n";
//			break;
//		}
//		
//	}
//	cout << "���α׷� �����մϴ�. \n";
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
		cout << "ū �޸� ��� ������ ��û�ϰ� �ֽ��ϴ�.\n";
		pb = new Big[10000];
		cout << "�޸� �� ���� ��û�� �źεǾ����ϴ�\n";
	}
	catch (bad_alloc& ba)
	{
		cout << "���ܰ� �����Ǿ����ϴ�!\n";
		cout << ba.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "�޸� ���� ���������� ���ԵǾ����ϴ�.\n";
	pb[0].stuff
}