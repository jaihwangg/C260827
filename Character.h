#pragma once
#include "Actor.h"

class ACharacter : public AActor
{
public:
	ACharacter();
	~ACharacter();
	
	void Move();
	void Attack();

};

