#include <iostream>
using namespace std;

int main()
{
    int n = 123;
    int r,s=0;
   
    cout<<n<<endl;
   
    r = n%10;
    s = s*10 + r;
    n = n/10;
   
    r = n%10;
    s = s*10 + r;
    n = n/10;
   
    r = n%10;
    s = s*10 + r;
    n = n/10;
   
    r = n%10;
    s = s*10 + r;
    n = n/10;
   
    cout<<s<<endl;
    return 0;
}