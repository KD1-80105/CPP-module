#include"./menu.h"
#include<iostream>
using namespace std;

emenu menu()
{
    int choice;
    cout<<"****************"<<endl;
cout<<"get_radius :"<<endl;
cout<<"get_height :"<<endl;
cout<<"set_radius"<<endl;
cout<<"set_height"<<endl;
cout<<"getVolume"<<endl;
cout<<"printVolume"<<endl;
cout<<"enter your choice :"<<endl;
cin>>choice;
cout<<"**********************"<<endl;
return emenu(choice);
}