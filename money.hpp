#include<iostream>
#include"ingridient.hpp"
using namespace std;
ingridient latte1(200, 150, 24, 20);
ingridient espressor1(50, 0, 18, 30);
ingridient cappuccino1(250, 50, 24, 50);
class money_input
{
    string choice;
    public:
    void coffee_choice()
    { 
        cout<<"What would you like::\n"; 
		cout<<setw(60)<<"Latte:  ||  Espresso:  ||  Cappucino: \n";
        cin>>choice;
        if(choice=="Latte")
        {
		    latte1.remaning_amount();
			latte1.coffee_cost();
	    }
        else if(choice=="espresso")
        {
		    espressor1.remaning_amount();
			espressor1.coffee_cost();
	    }
        else
        {
		    cappuccino1.remaning_amount();
			cappuccino1.coffee_cost();
		}
    }
};

