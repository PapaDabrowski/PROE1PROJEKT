#include <string.h>
#include "Container.h"
#include "Weapon.h"

Container::Container()
{
	Counter=0;
  Tab=new Weapon*[5];
}

void Container::AddElement(Weapon* X)
{
	if((Counter)%5==0)
	{
		Bufor=new Weapon*[Counter];
		memcpy(Bufor,Tab,sizeof(Weapon*)*Counter);
		delete [] Tab;
		Tab= new Weapon*[Counter+5];
		memcpy(Tab,Bufor,sizeof(Weapon*)*Counter);
		Tab[Counter]=X;
		delete [] Bufor;
	}
	else
	{
		Tab[Counter]=X;
	}
  Counter+=1;
}

void Container::RemoveElement(int id)
{
	int k=0;
				for(unsigned int i=0; i<Counter;i++)
				{
					if(Tab[i]->GetId()==id)
					{
						Bufor= new Weapon*[Counter];
						for(unsigned int j =0; j < Counter;j++)
						{
							if(j!=i)
							{
								Bufor[k]=Tab[j];
								k++;
							}
						}
						break;
					}
				}
				delete [] Tab;
				Counter--;
				for(int z=0;z<6;z++)
					if((Counter+z)%5==0)
					{
						Tab = new Weapon*[Counter+z];
						break;
					}
        memcpy(Tab,Bufor,sizeof(Weapon*)*Counter);
				delete [] Bufor;
}

unsigned int Container::GetCounter()
{
	return Counter;
}

Weapon* Container::operator [] (unsigned int i)
{
	return Tab[i];
}

Container::~Container()
{
  for(int i=0;i<Counter;i++)
	{
		delete Tab[i];
	}
	if(Tab!=NULL)
		delete [] Tab;
	if(Bufor!=NULL)
		delete [] Bufor;

}
