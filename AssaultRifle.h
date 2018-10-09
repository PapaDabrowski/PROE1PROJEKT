#pragma once
#include "Weapon.h"
#include <iostream>

class AssaultRifle:public Weapon
{
private:
   unsigned int RateOfFire;
public:
  AssaultRifle(unsigned int ,float,unsigned int,unsigned int,
    unsigned int,unsigned int,unsigned int);
  unsigned int GetInfo();
  virtual unsigned int GetId();
  virtual std::string GetType();
  virtual float GetCaliber();
  virtual unsigned int GetMuzzleVelocity();
  virtual unsigned int GetMagSize();
  virtual unsigned int GetRange();
  virtual unsigned int GetWeight();
};
