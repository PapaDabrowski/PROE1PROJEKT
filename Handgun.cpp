
#include <iostream>
#include "Handgun.h"
using namespace std;

Handgun::Handgun(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,
  unsigned int Range_,unsigned int Weight_,unsigned int Silencer_)
  {
   Id=Id_;
   Type="Handgun";
   Caliber=Caliber_;
   MagSize=MagSize_;
   MuzzleVelocity=MuzzleVelocity_;
   Range=Range_;
   Weight=Weight_;
   Silencer=Silencer_;
}

unsigned int Handgun::GetId()
{
return Id;
}

std::string Handgun::GetType()
{
  return Type;
}

float Handgun::GetCaliber()
{
  return Caliber;
}

unsigned int Handgun::GetMuzzleVelocity()
{
  return MuzzleVelocity;
}

unsigned int Handgun::GetMagSize()
{
  return MagSize;
}

unsigned int Handgun::GetRange()
{
  return Range;
}

unsigned int Handgun::GetWeight()
{
  return Weight;
}

unsigned int Handgun::GetInfo()
{
  return Silencer;
}
