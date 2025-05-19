#include <iostream>
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
   
    for(int i=0; i<s; i++)
    {
        sum= 0;
        t = arr[i];
        while(t>0)
        {
            r = t%10;
            sum += r;
            t =t/10;
        }
        arr[i] = sum;    
    }
   
    cout<<endl<<"After "<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}