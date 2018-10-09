#pragma once
#include "Weapon.h"
#include <iostream>

class Handgun: public Weapon
{
private:
   unsigned int Silencer;
public:
  Handgun(unsigned int,float,unsigned int,unsigned int,
    unsigned int,unsigned int,unsigned int);
  virtual unsigned int GetId();
  virtual std::string GetType();
  virtual float GetCaliber();
  virtual unsigned int GetMuzzleVelocity();
  virtual unsigned int GetMagSize();
  virtual unsigned int GetRange();
  virtual unsigned int GetWeight();
  virtual unsigned int GetInfo();
};
