#pragma once
#include "AssaultRifle.h"
#include "SniperRifle.h"
#include "Handgun.h"
#include "Container.h"
class App_Singleton
{
private:
  static App_Singleton* instance;
	Container Case;
protected:
	App_Singleton();
	App_Singleton(const App_Singleton&){}
public:
	static App_Singleton* getInstance();
  void Menu();
	void ShowAll();
  void Load();
	void Save();
  void Create(unsigned int);
};
