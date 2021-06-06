#include<iostream>
#include"calculation.hpp"
#include"initial_ing_amount.hpp"
using namespace std;

calculation cal;
class ingridient
{  
    float water,milk,coffee;
    public:
    float cost;
    ingridient(float a,float b, float c,float d)
    {
	    water=a;   milk=b;  coffee=c;   cost=d;
	}

    void coffee_cost()
    {
        int n;
		cout<<"Pay "<<cost<<" rupees "<<endl;
		cout<<"Pay Using:\n";
        cout<<setw(23)<<"1) UPI \n ";
        cout<<setw(22)<<"2) Cash \n";
        cout<<setw(53)<<"3) Swiping machine(Credit/Debit Card):\n";
		cin>>n;
		if(n==1)
		    cal.pay_money_UPI();
		else if(n==2)   
		    cal.pay_money_Cash(cost); 	
		else
			cal.pay_money_SM();
	}
	void remaning_amount()
	{
		water_total=water_total-water;
        if(water_total<=0)
        {
        	water_total=0;
        	cout<<"Sufficient ingridient are not available:\n ";
			cout<<setw(60)<<"Sorry for the Inconvenience:\n";
			exit(0);
		}
	    milk_total-=milk;
	    if(milk_total<=0)
        {
        	milk_total=0;
        	cout<<"Sufficient ingridient are not available:\n";
			cout<<setw(60)<<"Sorry for the Inconvenience:\n";
			exit(0);
		} 
	    coffee_total-=coffee;
	    if(coffee_total<=0)
        {
        	coffee_total=0;
        	cout<<"Sufficient ingridient are not available:\n"; 
			cout<<setw(60)<<"Sorry for the Inconvenience:\n";
			exit(0);
		}
	    cost_total+=cost;
	    if(cost_total<=0)
        {
        	cost_total=0;
        	cout<<"Sufficient ingridient are not available:\n"; 
			cout<<setw(60)<<"Sorry for the Inconvenience:\n";
			exit(0);
		}
	}	
};
        
//}latte1(200, 150, 24, 20), espressor1(50, 0, 18, 30), cappuccino1(250, 50, 24, 50);

