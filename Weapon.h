#pragma once
#include <string>

class Weapon
{
protected:
  unsigned int Id;
  std::string Type;
  float Caliber;
  unsigned int MuzzleVelocity;
  unsigned int MagSize;
  unsigned int Range;
  unsigned int Weight;
public:
  virtual unsigned int GetId()=0;
  virtual std::string GetType()=0;
  virtual float GetCaliber()=0;
  virtual unsigned int GetMuzzleVelocity()=0;
  virtual unsigned int GetMagSize()=0;
  virtual unsigned int GetRange()=0;
  virtual unsigned int GetWeight()=0;
  virtual unsigned int GetInfo()=0;
};
