#include "stdafx.h"
#include "StandardLibraryIncludes.h"
#include "Structs.h"

using std::cout;
using std::string;

string getMonsterTypeName(MonsterType type) {
	switch (type) {
		case MonsterType::OGRE:
			return "Ogre";
		case MonsterType::DRAGON:
			return "Dragon";
		case MonsterType::GIANT_SPIDER:
			return "Giant Spider";
		case MonsterType::ORC:
			return "Orc";
		case MonsterType::SLIME:
			return "Slime";
		default:
			return "unvalid type";
	}
}

void printMonster(Monster mon) {
	cout << "This " << getMonsterTypeName(mon.type) << " is named " << mon.name << " and has " << mon.health << " health.";
}

void monsterQuiz() {
	Monster ogre{ MonsterType::OGRE, "Torg", 145 };
	Monster slime{ MonsterType::SLIME, "Blurp", 23 };

	printMonster(ogre);
	cout << "\n";
	printMonster(slime);
}