#include "worker0.h"

using namespace std;

void Worker::Data() const
{
	cout << "��� �̸�: " << fullname << endl;
	cout << "��� ��ȣ: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}

Worker::Worker()
	: fullname("no name"), id(0L)
{
}

Worker::Worker(const std::string& s, long n)
	: fullname(s), id(n)
{
}

Worker::~Worker()
{
}

/* ================================================================= */

void Waiter::Data() const
{
	cout << "������ ���: " << panache << endl;
}

void Waiter::Get()
{
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
	{
		continue;
	}
}

Waiter::Waiter()
	: Worker(), panache(0)
{
}

Waiter::Waiter(const std::string& s, long n, int p)
	:Worker(s, n), panache(p)
{
}

Waiter::Waiter(const Worker& wk, int p)
	: Worker(wk), panache(p)
{
}

void Waiter::Set()
{
	cout << "�������� �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "����: ������\n";
	Worker::Data();
	Data();
}

/* ================================================================= */


const char* Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };

void Singer::Data() const
{
	cout << "��Ҹ� ����: " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "������ ��Ҹ� ���� ��ȣ�� �Է��Ͻʽÿ�.\n";
	int i;
	for ( i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << '\n';
	cin >> voice;
	while (cin.get() != '\n')
	{
		continue;
	}
}

Singer::Singer()
	:Worker(), voice(other)
{
}

Singer::Singer(const std::string& s, long n, int v)
	: Worker(s,n), voice(v)
{
}

Singer::Singer(const Worker& wk, int v)
	: Worker(wk), voice(v)
{
}

void Singer::Set()
{
	cout << "������ �̸��� �Է��Ͻÿ�: ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "����: ����\n";
	Worker::Data();
	Data();
}

/* ================================================================= */

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Singer::Get();
	Waiter::Get();
}

SingingWaiter::SingingWaiter()
{
}

SingingWaiter::SingingWaiter(const std::string& s, long n, int p, int v)
	: Worker(s, n), Waiter(s, n, p), Singer(s, n, v)
{
}

SingingWaiter::SingingWaiter(const Worker& wk, int p, int v)
	: Worker(wk), Waiter(wk,p), Singer(wk, v)
{
}

SingingWaiter::SingingWaiter(const Waiter& wt, int v)
	: Worker(wt), Waiter(wt), Singer(wt, v)
{
}

SingingWaiter::SingingWaiter(const Singer& wt, int p)
	: Worker(wt), Waiter(wt, p), Singer(wt)
{
}

void SingingWaiter::Set()
{
	cout << "���� �� �������� �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "����: ���� �� ������\n";
	Worker::Data();
	Data();
}
