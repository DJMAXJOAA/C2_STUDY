#include "all.h"
#include "worker0.h"
#include "queuetp.h"
const int Size = 5;
using namespace std;

//
//int main()
//{
//	Waiter bob("ȫ�浿", 314l, 5);
//	Singer bev("������", 522L, 3);
//	
//	Waiter w_temp;
//	Singer s_temp;
//
//	Worker* pw[LIM] =
//	{
//		&bob, &bev, &w_temp, &s_temp
//	};
//	
//	int i;
//	for ( i = 2; i < LIM; i++)
//	{
//		pw[i]->Set();
//	}
//	for ( i = 0; i < LIM; i++)
//	{
//		pw[i]->Show();
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	Stack<string> st;
//	char ch;
//	string po;
//	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, �����Ϸ��� Q\n";
//	return 0;
//}

int main()
{
	Queue<Worker*> worker(Size);
	Worker* lolas[Size];
	Worker* lolas2[Size];
	int ct;
	for ( ct = 0; ct < Size; ct++)
	{
		char choice;
		cout << "������ �Է��Ͻʽÿ�: \n"
			<< "w:������ s:���� "
			<< "t:���� �� ������ q:����\n";
		cin >> choice;
		while (strchr("wstq", choice)==NULL)
		{
			cout << "w, s, t, q  �߿��� �ϳ� �����ϼ���: ";
			cin >> choice;
		}
		if (choice == 'q')
		{
			break;
		}
		switch (choice)
		{
		case 'w': lolas[ct] = new Waiter;
			break;
		case 's': lolas[ct] = new Singer;
			break;
		case 't': lolas[ct] = new SingingWaiter;
			break;
		}
		cin.get();
		lolas[ct]->Set();
		worker.enque(lolas[ct]);
	}
	cout << "\n��� ��Ȳ�� ������ �����ϴ�.: \n";
	int i;
	for ( i = 0; i < ct; i++)
	{
		worker.deque(lolas2[i]);
		lolas2[i]->Show();
		cout << endl;
		/*lolas[i]->Show();*/
	}
	for ( i = 0; i < ct; i++)
	{
		delete lolas[i];
		delete lolas2[i];
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}