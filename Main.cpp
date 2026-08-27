#include <iostream>
#include <string>
#include <vector>

#include "Monster.h"
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	APlayer* GamePlayer = new APlayer;

	int NumSlimes = 3;
	int NumGoblins = 2;
	int NumWildBoars = 1;

	vector<AMonster*> VectorMonsters;

	for (int i = 0; i < NumSlimes; i++)
	{
		ASlime* Slime = new ASlime();
		VectorMonsters.push_back(Slime);
	}

	for (int i = 0; i < NumGoblins; i++)
	{
		AGoblin* Goblin = new AGoblin();
		VectorMonsters.push_back(Goblin);
	}

	for (int i = 0; i < NumWildBoars; i++)
	{
		AWildBoar* WildBoar = new AWildBoar();
		VectorMonsters.push_back(WildBoar);
	}

	//Move
	GamePlayer->Move();

	for (AMonster* Monster : VectorMonsters)
	{
		Monster->Move();
	}



	return 0;
}