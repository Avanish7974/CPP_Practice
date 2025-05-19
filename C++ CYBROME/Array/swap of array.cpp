# include <iostream>
using namespace std;
int main()
{
	int t,r,sum;
    int arr[]= {12,23,34,45,56,67,78,89,32,43,54,675,76,87,98};
    int s = sizeof(arr)/4;
   
    cout<<"brfore "<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    for(int i=s; i>s; i--)
    {
        cout<<arr[i]<<" ";
    }
 return 0; 
}
