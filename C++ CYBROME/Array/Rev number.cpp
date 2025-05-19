# include <iostream>
using namespace std;
int main()
{
    int t,r,rev;
    int arr[]= {12,23,34,45,56,67,78,89,32,43,54,675,76,87,98};
    int s = sizeof(arr)/4;
   
    cout<<"brfore "<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<s; i++)
    {
        t = arr[i];
        rev=0;
        while(t>0)
        {
            r = t%10;
            rev = rev *10 + r;
            t=t/10;
        }
        arr[i] = rev;
    }
   
    cout<<"After "<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
   
   
   
    return 0;
}

