# include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter your seat number : ";
	cin>>number;
	cout<<"Your Seat number is : "<<number<<endl;

	
	number = number%8;
	cout<<"Your Seat number is : "<<number<<endl;
	
	
	if(number <= 72 and number >= 1)
	{
		
		cout<<"welcome to indian railway";
		
		if(number == 1 or number == 4)
		{
			cout<<"Your seat is lower";
		}
		
		
	   else if(number == 2 or number == 5)
	   {
		cout<<"Your birth is middle birth";
			}		
	   else if(number == 3 or number == 6)
	   {
		 cout<<"Your birth is side upper";
			}
			
	    else if(number == 7)
	    {
		cout<<"Your birth is side lower";
			}	
	    else if(number == 0)
	    {
		cout<<"Your birth is side upper";
			}					
	    else
	    {
		cout<<"Go and book your ticket";
			}	
		
	}
					
 return 0;
}
