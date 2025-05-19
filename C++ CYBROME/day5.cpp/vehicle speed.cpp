# include <iostream>
using namespace std;
int main()
{
	int Vehicle_speed;
	cout<<"Enter the speed of vehicle : ";
	cin>>Vehicle_speed;
     
	 if(Vehicle_speed >= 1)
	 {
	 	cout<<"Bike is moving in forward direction";
	 	
		 }	
	else if (Vehicle_speed < 0)
    {
        cout<<"Bike is in Backward";
    }
    else
    {
        cout<<"Car is in parking";
    }
    
		 
 return 0; 
}

