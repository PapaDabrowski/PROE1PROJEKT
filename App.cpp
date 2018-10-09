//Created by PAPA Dąbrowski
#include "App.h"
#include "Handgun.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ostream>
#include <iostream>
#include <string>
#include <limits>
using namespace std;

App_Singleton * App_Singleton::instance=0;
App_Singleton * App_Singleton::getInstance()
{
	if(instance==0)
	{
		instance=new App_Singleton;
	}
	else
	return instance;
}

App_Singleton::App_Singleton()
{
	Menu();
}

void App_Singleton::Create(unsigned int X)
{
  int select;
  cout<<"What type od Weapon you want to create"<<endl;
  cout<<"Choose 1 to Create AssaultRifle:"<<endl;
  cout<<"Choose 2 to Create SniperRifle:"<<endl;
  cout<<"Choose 3 to Create Handgun:"<<endl;
  cout<<"Type number: ";
	while(true){
	 cin>>select;
	 if(cin.fail())	{
		cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
		 cin.clear();
		 cin.ignore(300, '\n');

		 continue;
	 }
	else break;
}

	if((select>3) || (select<0))
  {
    system("clear");
		cout<<"Function doesn't exist"<<endl;
  }
  else
  {
    switch(select)
    {
      bool Silencer_;
      unsigned int MagSize_,Range_,Weight_,Rate_,Scope_,MuzzleVelocity_;
      float Caliber_;
     case 1:
     {
             cout<<"Enter the Caliber of your Weapon"<<endl<<"Type number: ";
            do{
						 cin>>Caliber_;
						 if(cin.fail())
					 	{
					 		cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";

               cin.clear();
							  cin.ignore(300, '\n');

							 continue;
						 }
            else break;
					}while(true);

                  if(Caliber_<0.01)
                  {
                    cout<<"Error: Caliber of AssaultRifle must be greater than 0!"<<endl;
                    break;
                  }

             cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
						 do{
 						 cin>>MagSize_;
 						 if(cin.fail())
 					 	{
 					 		cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
                cin.clear();
 							  cin.ignore(300, '\n');

 							 continue;
 						 }
             else break;
 					}while(true);
                  if(MagSize_<0)
                  {
                     cout<<"Error: MagSize of AssaultRifle must be greater than 0!"<<endl;
                     break;
                  }

            cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
						do{
						 cin>>MuzzleVelocity_;
						 if(cin.fail())
					 	{
					 		cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
               cin.clear();
							  cin.ignore(300, '\n');
							 continue;
						 }
            else break;
					}while(true);
                 if(MuzzleVelocity_<0)
                 {
                    cout<<"Error: MuzzleVelocity of AssaultRifle must be greater than 0!"<<endl;
                    break;
                 }

         cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
				 do{
					cin>>Range_;
					if(cin.fail())
				 {
					 cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
						cin.clear();
						 cin.ignore(300, '\n');
						continue;
					}
				 else break;
			 }while(true);
              if(Range_<0)
              {
                   cout<<"Error: Range of AssaultRifle must be greater than 0!"<<endl;
                   break;
              }
         cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
				 do{
					cin>>Weight_;
					if(cin.fail())
				 {
					 cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
						cin.clear();
						 cin.ignore(300, '\n');
						continue;
					}
				 else break;
			 }while(true);
               if(Weight_<0)
               {
                  cout<<"Error: Weight of AssaultRifle must be greater than 0!"<<endl;
                  break;
               }

         cout<<"Enter the Fire Rate of your Weapon"<<endl<<"Type number: ";
				 do{
					cin>>Rate_;
					if(cin.fail())
				 {
					 cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
						cin.clear();
						 cin.ignore(300, '\n');
						continue;
					}
				 else break;
			 }while(true);
              if(Rate_<0)
              {
                 cout<<"Error: Fire Rate of AssaultRifle must be greater than 0!"<<endl;
                 break;
              }
         Weapon *Object=new AssaultRifle(X,Caliber_,MagSize_,MuzzleVelocity_,
         Range_,Weight_,Rate_);
         Case.AddElement(Object);
         break;
     }
     case 2:
     {
         cout<<"Enter the Caliber of your Weapon"<<endl<<"Type number: ";
				 do{
					cin>>Caliber_;
					if(cin.fail())
				 {
					 cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
						cin.clear();
						 cin.ignore(300, '\n');
						continue;
					}
				 else break;
			 }while(true);
              if(Caliber_<0.01)
              {
                 cout<<"Error: Caliber of SniperRifle must be greater than 0!"<<endl;
                 break;
              }

        cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>MagSize_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					  cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(MagSize_<0)
            {
                cout<<"Error: MagSize of SniperRifle must be greater than 0!"<<endl;
                break;
            }
        cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>MuzzleVelocity_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(MuzzleVelocity_<0)
             {
                cout<<"Error: MuzzleVelocity of SniperRifle must be greater than 0!"<<endl;
                break;
             }
        cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Range_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');

				 }
				else break;
			}while(true);
             if(Range_<0)
             {
                cout<<"Error: Range of SniperRifle must be greater than 0!"<<endl;
                break;
             }
        cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Weight_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					  cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(Weight_<0)
             {
                cout<<"Error: Weight of SniperRifle must be greater than 0!"<<endl;
                break;
             }
        cout<<"Enter the Scope of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Scope_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					  cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if((Scope_%2!=0)||(Scope_<0))
             {
                cout<<"Error: Scope Zoom must be a even number and must be greater than 0"<<endl;
                break;
             }
        Weapon *Object=new SniperRifle(X,Caliber_,
        MagSize_,MuzzleVelocity_,Range_,Weight_,Scope_);
        Case.AddElement(Object);

				break;
        }
     case 3:
     {
        cout<<"Enter the Caliber of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Caliber_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(Caliber_<0.01)
             {
                cout<<"Error: Caliber of Handgun must be greater than 0!"<<endl;
                break;
             }
        cout<<"Enter the MagSize of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>MagSize_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(MagSize_<0)
             {
                cout<<"Error: MagSize of Handgun must be greater than 0!"<<endl;
                break;
             }
        cout<<"Enter the MuzzleVelocity of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>MuzzleVelocity_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(MuzzleVelocity_<0)
             {
               cout<<"Error: MuzzleVelocity of Handgun must be greater than 0!"<<endl;
               break;
             }
        cout<<"Enter the Range of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Range_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(Range_<0)
             {
               cout<<"Error: Range of Handgun must be greater than 0!"<<endl;
               break;
             }
        cout<<"Enter the Weight of your Weapon"<<endl<<"Type number: ";
				do{
				 cin>>Weight_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
             if(Weight_<0)
             {
               cout<<"Error: Weight of Handgun must be greater than 0!"<<endl;
               break;
             }
        cout<<"Do you want a Silencer to your Handgun"<<endl<<"Type number [1/0]: ";
				do{
				 cin>>Silencer_;
				 if(cin.fail())
				{
					cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
					 cin.clear();
					 cin.ignore(300, '\n');
					 continue;
				 }
				else break;
			}while(true);
				if(Silencer_==0 ||Silencer_==1)
				{
				cout<<"Error: Weight of Handgun must be greater than 0!"<<endl;
        break;
			  }
        Weapon *Object=new Handgun(X,Caliber_,
          MagSize_,MuzzleVelocity_,Range_,Weight_,Silencer_);
        Case.AddElement(Object);
				break;
      }
    }
		system("clear");
    cout<<endl<<"Object has been created!"<<endl<<endl;
	 }

}

void App_Singleton::Menu()
{
	int i=0;
	int j,k;
  unsigned int ID=1;
while(i!=1)
 {

	if(Case.GetCounter()==0)
 {
	cout<<"Welcome to App which create and store Wepons"<<endl;
  cout<<"Options:"<<endl;
	cout<<"1-Create"<<endl;
	cout<<"2-Load"<<endl;
	cout<<"3-End Program"<<endl;
  cout<<"Type number: ";
	do{
	 cin>>k;
	 if(cin.fail())
	{
		cout<<"You have typed wrong thing!"<<endl<<"Type Again: ";
		 cin.clear();
		 cin.ignore(300, '\n');
		 continue;
	 }
	else break;
}while(true);
	if((k==1)||(k==2)||(k==3))
	{
		switch(k)
		{
			case 1:
			{
       bool IDstatus=false;
			 int w=0;
			 system("clear");
        while(Case.GetCounter()!=w)
				{
				for(int h=0;h<Case.GetCounter();h++)
				if(Case[i]->GetId()==ID) IDstatus=true;
        if(IDstatus=true)
				{
          ID+=1;
					w=0;
				}
        else w+=1;
				IDstatus=false;
			  }

				Create(ID);
        ID+=1;
				break;
			}
			case 2:
			{
        system("clear");
				Load();

				break;
			}
			case 3:
			{
				i+=1;
				break;
			}
		}

	}
	else
	cout<<"Wrong Number!"<<endl;
}
  if(Case.GetCounter()!=0)
	{
          cout<<"Options:"<<endl;
		      cout<<"1-Create"<<endl;
		      cout<<"2-Remove"<<endl;
	        cout<<"3-Show All Objects"<<endl;
					cout<<"4-Save"<<endl;
		      cout<<"5-End Program"<<endl;
	        cout<<"Type number: ";
					do{
					 cin>>j;
					 if(cin.fail())
					{

						cout<<"You have typed wrong number!"<<endl<<"Type Again: ";
						 cin.clear();
						 cin.ignore(300, '\n');
						 continue;
					 }
					else break;
				}while(true);
		      if((j>0)&&(j<6))
		      {
		        switch(j)
		        {
		          case 1:
		          {


								system("clear");
                int m,w,z;
								w=0;
								z=0;
								while(w!=1)
								{
                 z=0;
								 for(m=0;m<Case.GetCounter();m++)
								 {
									 if(ID==Case[m]->GetId())
									 {
										 ID++;
										 break;
									 }
									 else z++;
								 }
								 if(z==Case.GetCounter()) w++;
								}

								 Create(ID);
								 ID+=1;
								 break;
		          }
		          case 2:
		          {
                bool status=false;
								unsigned int X;
								cout<<"Id of Weapon which you want remove"<<endl<<"Type number: ";
								cin>>X;

								for(int k=0;k<Case.GetCounter();k++)
								{
									if(Case[k]->GetId()==X)
									status=true;
                }
								if(status==true)
								{
								Case.RemoveElement(X);
							  system("clear");
								cout<<endl<<"Object have been removed!"<<endl<<endl;
							}

								else
								{
                  system("clear");
									cout<<endl<<"Error: Object with that Id don't exist!"<<endl;
								}
								break;
		          }
		          case 3:
		          {
                system("clear");
								ShowAll();
		            break;
		          }
		          case 4:
							{
	             Save();
               system("clear");
							 cout<<endl<<"SavedData Complited!"<<endl;
								break;
							}
		          case 5:
		          {
		            i++;
		            break;
		          }
		        }
		      }
		      else
		        cout<<"Wrong number!"<<endl;
		}
  }
}

void App_Singleton::ShowAll()
{
  cout<<endl<<"Objects:"<<endl;
	for(int i=0; i<Case.GetCounter();i++)
		cout<<Case[i]->GetType()<<" ID: "<<Case[i]->GetId()<<" Caliber: "<<Case[i]->GetCaliber()<<" Range: "<<Case[i]->GetRange()<<endl;
  cout<<endl;
}

void App_Singleton::Save()
{
  std::fstream FILE;
	FILE.open("SavedData.txt",std::ios::out);
  FILE<<Case.GetCounter()<<endl;
	for(int i=0;i<Case.GetCounter();i++)
	{
		FILE<<Case[i]->GetType()<<endl<<Case[i]->GetId()<<endl<<Case[i]->GetCaliber()<<endl<<
		Case[i]->GetMagSize()<<endl<<Case[i]->GetMuzzleVelocity()<<endl<<Case[i]->GetRange()<<endl<<
		Case[i]->GetWeight()<<endl<<Case[i]->GetInfo()<<endl;
	}
}

void App_Singleton::Load()
{
  int cCounter;
	unsigned int MuzzleVelocity_,Range_,MagSize_,Weight_,Id_,Scope_,Silencer_,Rate_;
	float Caliber_;
	std::string temp,temp1,temp2,temp3,temp4,temp5,temp6,temp7;
  std::ifstream FILE;
	FILE.open("SavedData.txt",std::ios::in);
  getline(FILE,temp);

	cCounter=atoi(temp.c_str());

  if(cCounter!=0)
	{
  for(int g=0;g<=cCounter;g++)
		{
      getline(FILE,temp1);

			if(temp1=="AssaultRifle")
			{
				getline(FILE,temp2);
				Id_=atoi(temp2.c_str());
				getline(FILE,temp3);
				Caliber_=atof(temp3.c_str());
				getline(FILE,temp);
			  MagSize_=atoi(temp.c_str());
				getline(FILE,temp4);
				MuzzleVelocity_=atoi(temp4.c_str());
				getline(FILE,temp5);
				Range_=atoi(temp5.c_str());
				getline(FILE,temp6);
				Weight_=atoi(temp6.c_str());
				getline(FILE,temp7);
				Rate_=atoi(temp7.c_str());
				Weapon *Object=new AssaultRifle(Id_,Caliber_,
        MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_);
        Case.AddElement(Object);
			}
			if(temp1=="SniperRifle")
			{
				getline(FILE,temp2);
				Id_=atoi(temp2.c_str());
				getline(FILE,temp3);
				Caliber_=atof(temp3.c_str());
				getline(FILE,temp);
			  MagSize_=atoi(temp.c_str());
				getline(FILE,temp4);
				MuzzleVelocity_=atoi(temp4.c_str());
				getline(FILE,temp5);
				Range_=atoi(temp5.c_str());
				getline(FILE,temp6);
				Weight_=atoi(temp6.c_str());
		  	getline(FILE,temp);
			  Scope_=atoi(temp.c_str());
				Weapon *Object=new SniperRifle(Id_,Caliber_,
				MagSize_,MuzzleVelocity_,Range_,Weight_,Scope_);
				Case.AddElement(Object);
			}
			if(temp1=="Handgun")
			{
				getline(FILE,temp);
				Id_=atoi(temp.c_str());
				getline(FILE,temp);
				Caliber_=atof(temp.c_str());
				getline(FILE,temp);
				MagSize_=atoi(temp.c_str());
        getline(FILE,temp);
			  MuzzleVelocity_=atoi(temp.c_str());
				getline(FILE,temp);
				Range_=atoi(temp.c_str());
				getline(FILE,temp);
				Weight_=atoi(temp.c_str());
				getline(FILE,temp);
				Silencer_=atoi(temp.c_str());
				Weapon *Object=new Handgun(Id_,Caliber_,
        MagSize_,MuzzleVelocity_,Range_,Weight_,Silencer_);
        Case.AddElement(Object);
			}
		}
  FILE.close();
	}
	else cout<<endl<<"File is empty!"<<endl<<endl;
}
