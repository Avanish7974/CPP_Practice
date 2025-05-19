# include <iostream>
using namespace std;
int main()
{
	//	int arr[5] = {11,22,33,44,55};
    int arr[] = {1,2,3,4,5};
    int sum = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<sz ; i++)
	{
		sum = sum + arr[i];
	}
	cout<<"Sum of Elements of array : "<<sum;
 return 0; 
}
