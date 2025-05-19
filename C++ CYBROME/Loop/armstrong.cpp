#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, cod=0, r, ans=0, rev;
    cout<<"Enter Number: ";
    cin>>n;
   
    int t = n;
   
    while(t>0)
    {
        cod++;
        t= t/10;
    }
    t=n;
    //cout<<"COD "<<cod<<endl;
    while(t>0)
    {
        r = t%10;
        ans += pow(r,cod);
        t /=10;
    }
    cout<<"ANS "<<ans<<endl;
    return 0;
}