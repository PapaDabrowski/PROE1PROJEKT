#include <iostream>
#include "SniperRifle.h"
using namespace std;

SniperRifle::SniperRifle(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_
  ,unsigned int Range_ ,unsigned int Weight_ ,unsigned int Scope_)
{
  Id=Id_;
  Type="SniperRifle";
  Caliber=Caliber_;
  MagSize=MagSize_;
  MuzzleVelocity=MuzzleVelocity_;
  Range=Range_;
  Weight=Weight_;
  Scope=Scope_;
}

unsigned int SniperRifle::GetId()
{
return Id;
}

std::string SniperRifle::GetType()
{
  return Type;
}

float SniperRifle::GetCaliber()
{
  return Caliber;
}

unsigned int SniperRifle::GetMuzzleVelocity()
{
  return MuzzleVelocity;
}

unsigned int SniperRifle::GetMagSize()
{
  return MagSize;
}

unsigned int SniperRifle::GetWeight()
{
  return Weight;
}

unsigned int SniperRifle::GetRange()
{
  return Range;
}

unsigned int SniperRifle::GetInfo()
{
  return Scope;
}
