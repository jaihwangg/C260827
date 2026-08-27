#pragma once
#include "Actor.h"

class ACharacter : public AActor
{
public:
	ACharacter();
	virtual ~ACharacter();
	
	virtual void Move();
	virtual void Attack();

};

