void final()
{
    cout<<setw(60)<<"Thanks for Using Our Service:";
    cout<<"\n\n\n";
    cout<<"Wants to Check the amount of ingridient avaliable in machine(y/n): ";
    char l;
    cin>>l;
    if(l=='y'||l=='Y')
    {
    	int t,i=0;
    	for( i=1;i<=3;i++)
    	{
    		cout<<"Password:";
    	    cin>>t;
    	    if(t==456)
    	    {
               cout<<"-------------------------------\n";
	           cout<<"| Remaning water  ="<<water_total<<"\n";
	           cout<<"-------------------------------\n";
	           cout<<"| Remaning Milk   ="<<milk_total<<"\n";
	           cout<<"-------------------------------\n";
	           cout<<"| Remaning Coffee ="<<coffee_total<<"\n";
	           cout<<"-------------------------------\n";
	           cout<<"| Today Earning   ="<<cost_total<<"\n";
	           cout<<"-------------------------------";
	           break;
	        }
	        else
	        {
	    	    cout<<setw(60)<<"Wrong Password:\n";
	         	cout<<"Enter Correct ";
		    }
	    }
	    if(i>3)
		   cout<<"Your account is block for 24 hours:";
	}
}
