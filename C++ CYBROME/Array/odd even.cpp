// Write a program to append the Fibonacci series up to a given number of terms in an array.
//Wap to discover a secret no. by the use of existing currency. Currency in the form of pper currency in that every paper have a unique no. that is the value of the array suppose you have 10 currency like 1,2,3,4,5,6, 
//condition 1 convert it by the sod 
#include <iostream>
using namespace std;

int isOE(int x)
{
    if(x%2==0)
    return 0;
    else
    return 1;
}

int main()
{
    int arr[] = {24,22,11,81,9,45,23,23,34,10};
    int s = sizeof(arr)/4;
   
    for(int i=0; i<s; i++ ) cout<<arr[i]<<" ";
    cout<<endl;
   
    for(int i=0; i<s; i++ )
    {
        arr[i] = isOE(arr[i]);
    }
   
    for(int i=0; i<s; i++ ) cout<<arr[i]<<" ";
    cout<<endl;
   
    int d=0, b=2;
   
    for(int i=0; i<s; i++ )
    {
        d = (b*d) + arr[i];
    }
   
    cout<<d;
   
    return 0;
}