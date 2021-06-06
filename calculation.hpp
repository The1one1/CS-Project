#include<iostream>
using namespace std;

class calculation
{
	int _money;
	public:
		void pay_money_UPI()
		{
			cout<<setw(30)<<"|------------|\n";
			cout<<setw(30)<<"|------------|\n";
			cout<<setw(30)<<"|scan QR code|\n";
			cout<<setw(30)<<"|------------|\n";
			cout<<setw(30)<<"|------------|\n";
			cout<<"\nHere is your coffee |__| \n";
		}
		
		void pay_money_SM()
		{
			cout<<"Swipe Your Credit Card:\n";
			for(int i=0;i<10000000;i++);
			cout<<"Enter the PIN: ";
			int x;
			cin>>x;
			for(int i=0;i<10000000;i++);
			cout<<"Here is your coffee |__| \n";
		}

		void pay_money_Cash(int cost)
		{
            cout<<"enter the amount:";
			cin>>_money;
			_money-=cost;	
			if(_money>0) cout<<"Refundable amount:"<<_money<<"\n";
			cout<<"Here is your coffee |__| \n";
		}
};

