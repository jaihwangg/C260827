#include "Character.h"
#include <iostream>

using namespace std;

ACharacter::ACharacter()
{

}

ACharacter::~ACharacter()
{

}

void ACharacter::Move()
{
	cout << "Character::Move" << endl;
}

void ACharacter::Attack()
{
	cout << "Character::Attack" << endl;
}