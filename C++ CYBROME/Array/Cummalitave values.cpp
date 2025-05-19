# include <iostream>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5};
	 int s = sizeof(arr)/sizeof(arr[0]);
	int brr[s];
	int sum = 0;
	for(int i=0; i<s ; i++)
	{
		sum = sum + arr[i];
		brr[s] = sum;
	}
	for(int i =0; i<s ; i++)
	{
		cout<<brr[i]<<" ";
	}
 return 0; 
}
