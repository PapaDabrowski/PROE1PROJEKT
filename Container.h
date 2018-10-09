#pragma once
#include "Weapon.h"

class Container
{
private:
	Weapon **Tab;
  Weapon **Bufor;
  unsigned int Counter;
public:
	Container();
	void AddElement(Weapon*);
	void RemoveElement(int);
	unsigned int GetCounter();
	Weapon* operator[](unsigned int);
	~Container();
};
