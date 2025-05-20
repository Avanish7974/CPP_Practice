#include <iostream>
using namespace std;

void show(int x)
{
    if(x%2==0)
    cout<<x<<" is Even"<<endl;
    else
    cout<<x<<" is Odd"<<endl;
}

int main()
{
    int arr[5] = {12,13,14,15,16};
   
    for(int i=0; i<5; i++)
    {
        show(arr[i]);
    }
    return 0;
}
