#pragma once
#include "all.h"

using std::string;

class Monster
{
private:
	string name;
public:
	Monster() { name = ""; } 
	Monster(string str);
	void Name() const;
	void SetName(string str);
	string GetName();
};

class FlyingMonster : public Monster
{
private:
	bool isFlying;
public:
	FlyingMonster();
	FlyingMonster(string str, bool isFlying);
	void ShowName();
};