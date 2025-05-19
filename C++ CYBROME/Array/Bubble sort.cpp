# include <iostream>
using namespace std;
int main()
{
	 int arr[] = {15,79,19,95,12};
	 int s = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<s ; i++)
	{
	
	   for(int j = i+1; j<s ; j++)
	  {
		if(arr[i] > arr[j])
		{
		   swap(arr[i] , arr[j]);	
		}
	  } 
    }
    
    for(int k =0; k<s; k++)cout<<arr[k]<<" ";
    cout<<endl;
 return 0; 
}
