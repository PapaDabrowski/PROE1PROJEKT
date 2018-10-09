#pragma once
#include "Weapon.h"
#include <ostream>

class SniperRifle:public Weapon
{
  unsigned int Scope;
public:
  SniperRifle(unsigned int,float,unsigned int,unsigned int,unsigned int,unsigned int
    ,unsigned int);
  virtual unsigned int GetId();
  virtual std::string GetType();
  virtual float GetCaliber();
  virtual unsigned int GetMuzzleVelocity();
  virtual unsigned int GetMagSize();
  virtual unsigned int GetRange();
  virtual unsigned int GetWeight();
  virtual unsigned int GetInfo();
};
