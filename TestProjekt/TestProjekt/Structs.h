#pragma once
#ifndef STRUCTS_H
#define STRUCTS_H
#include "Enums.h"
struct Hunter {
	std::string mainWeapon;
	double playtime;
	std::string favMonster;
};

struct Monster {
	MonsterType type;
	std::string name;
	int health;
};


#endif // !STRUCTS_H
