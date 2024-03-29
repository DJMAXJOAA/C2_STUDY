#include "all.h"
#include "worker0.h"
#include "queuetp.h"
const int Size = 5;
using namespace std;

//
//int main()
//{
//	Waiter bob("홍길동", 314l, 5);
//	Singer bev("조수미", 522L, 3);
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
//	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, 종료하려면 Q\n";
//	return 0;
//}

int main()
{
	Queue<Worker*> worker(Size);
	Worker* lolas[Size];
	
	int ct;
	for ( ct = 0; ct < Size; ct++)
	{
		char choice;
		cout << "직종을 입력하십시오: \n"
			<< "w:웨이터 s:가수 "
			<< "t:가수 겸 웨이터 q:종료\n";
		cin >> choice;
		while (strchr("wstq", choice)==NULL)
		{
			cout << "w, s, t, q  중에서 하나 선택하세요: ";
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
	cout << "\n사원 현황은 다음과 같습니다.: \n";
	int i;
	for ( i = 0; i < ct; i++)
	{
		worker.deque(lolas[i]);
		lolas[i]->Show();
		cout << endl;
	}
	for ( i = 0; i < ct; i++)
	{
		delete lolas[i];
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}