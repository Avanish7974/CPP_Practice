#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, cod=0, r, ans=0, i =1, t;
   
    while(i<=1000000)
    {
        n = i;
        t = n;
   
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
       
        if(n==ans)
        {
            cout<<n<<" is Armstrong"<<endl;
        }
       
        i++;
       
        ans = 0;
        cod=0;    
    }
   

   
    return 0;
}