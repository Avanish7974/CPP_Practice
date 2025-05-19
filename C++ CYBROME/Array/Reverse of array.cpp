# include <iostream>
using namespace std;
int main()
{
	int n,r;
//	cout<<"Enter the value : ";
//	cin>>n;
    int arr[] = {11,22,33,44,55};
    int sz = sizeof(arr)/sizeof(arr[0]);
	
	while(sz>0)
	{
		
		r =n%10;
		cout<<r;
		sz = sz/10;
		 
		
	}

	
 return 0; 
}
