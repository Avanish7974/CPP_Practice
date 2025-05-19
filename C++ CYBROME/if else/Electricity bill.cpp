# include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your unit of electricity consumption : ";
	cin>>n;
	
	if(n<0)
	
	cout<<"Enter valid unit";
	
	else if(n<100)
	
	cout<<"Total Electricity bill is : "<<n*4<<endl;
	else if(n<150)
	
	cout<<"Total Electricity bill is : "<<n*5<<endl;
	else if(n<200)
	
	cout<<"Total Electricity bill is : "<<n*6<<endl;
	
	else if  (n>=201)
	
	cout<<"Total Electricity bill is : "<<n*7<<endl;
	
	
	
	
 return 0; 
}
