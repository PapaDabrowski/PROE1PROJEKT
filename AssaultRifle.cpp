#include <iostream>
#include "AssaultRifle.h"
using namespace std;

AssaultRifle::AssaultRifle(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,
  unsigned int Range_,unsigned int Weight_,unsigned int Rate_)
{
 Id=Id_;
 Type="AssaultRifle";
 MagSize=MagSize_;
 MuzzleVelocity=MuzzleVelocity_;
 Caliber=Caliber_;
 Range=Range_;
 Weight=Weight_;
 RateOfFire=Rate_;
}

unsigned int AssaultRifle::GetId()
{
return Id;
}

std::string AssaultRifle::GetType()
{
  return Type;
}

float AssaultRifle::GetCaliber()
{
  return Caliber;
}

unsigned int AssaultRifle::GetInfo()
{
  return RateOfFire;
}

unsigned int AssaultRifle::GetMuzzleVelocity()
{
  return MuzzleVelocity;
}

unsigned int AssaultRifle::GetMagSize()
{
  return MagSize;
}

unsigned int AssaultRifle::GetRange()
{
  return Range;
}

unsigned int AssaultRifle::GetWeight()
{
  return Weight;
}
