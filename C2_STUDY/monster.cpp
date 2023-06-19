#include "monster.h"

using namespace std;

Monster::Monster(string str)
	: name(str)
{
	
}

void Monster::Name() const
{
	cout << name;
}

void Monster::SetName(string str)
{
	name = str;
}

string Monster::GetName()
{
	return string();
}


FlyingMonster::FlyingMonster()
{
}

FlyingMonster::FlyingMonster(string str, bool isFlying)
	: Monster(str), isFlying(isFlying) // ȣ��
{
	SetName(str);
}

void FlyingMonster::ShowName()
{
	if (isFlying)
	{
		cout << GetName() << "�� ���߿� �ִ�" << endl;
	}
	else
	{
		cout << GetName() << "�� ���� �ִ�" << endl;
	}
}
