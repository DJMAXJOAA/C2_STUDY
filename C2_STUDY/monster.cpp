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
	: Monster(str), isFlying(isFlying) // 호출
{
	SetName(str);
}

void FlyingMonster::ShowName()
{
	if (isFlying)
	{
		cout << GetName() << "는 공중에 있다" << endl;
	}
	else
	{
		cout << GetName() << "는 지상에 있다" << endl;
	}
}
