#include "Character.h"
#include <iostream>

using namespace std;

ACharacter::ACharacter()
{
	cout << "ACharacter »ý¼º" << endl;
}

ACharacter::~ACharacter()
{
	cout << "ACharacter ¼Ò¸ê" << endl;
}

void ACharacter::Move()
{
	cout << "Character::Move" << endl;
}

void ACharacter::Attack()
{
	cout << "Character::Attack" << endl;
}