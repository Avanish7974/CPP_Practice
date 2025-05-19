# include <iostream>
using namespace std;
int main()
{
	int arr[] = {11,22,33,44,55};
	
	int hi = sizeof(arr[0]);
	
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	
	cout<<sz<<endl;
	cout<<hi<<endl;

	cout<<"Data 1 "<<arr[0]<<endl;
	cout<<"Data 2 "<<arr[1]<<endl;
	cout<<"Data 3 "<<arr[2]<<endl;
	cout<<"Data 4 "<<arr[3]<<endl;
	cout<<"Data 5 "<<arr[4]<<endl;
	cout<<"Data 6 "<<arr[5]<<endl;
	cout<<"Data 7 "<<arr[6]<<endl;
	
 return 0; 
}
