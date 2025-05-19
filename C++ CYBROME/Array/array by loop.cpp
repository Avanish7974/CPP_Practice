# include <iostream>
using namespace std;
int main()
{
//	int arr[5] = {11,22,33,44,55};
    int arr[] = {11,22,33,44,55,11,22,33,44,55,11,22,33,44,55,11,22,33,44,55};
    int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<sz ; i++)
	{
		cout<<"DATA "<<arr[i]<<endl;
	}
 return 0; 
}
