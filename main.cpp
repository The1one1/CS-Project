#include<bits/stdc++.h>
#include"money.hpp"
#include"final_ingridient.hpp"
using namespace std;
int main()
{
	money_input money;
	char r;
	do
	{
       money.coffee_choice();
       cout<<"Would like to have more:y/n:";
       cin>>r;
    }while(r=='y'||r=='Y');
    final();
}
