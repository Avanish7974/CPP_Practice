#include <iostream>
using namespace std;

int main()
{
    double bs, gs, hra, ta, da, sa, pf, esi, tax;
    cout<<"enter your Basic salary: ";
    cin>>bs;
   
    hra = bs*0.2;
    ta = bs*0.12;
    da = bs*0.35;
    sa = bs*0.15;
    pf = bs*0.125;
    esi = bs*0.085;
    gs = bs + ta + da + sa - pf - esi;
   
    cout<<"Basic salary: "<<bs<<endl;
    cout<<"DA salary: "<<da<<endl;
    cout<<"TA salary: "<<ta<<endl;
    cout<<"HRA salary: "<<hra<<endl;
    cout<<"SA salary: "<<sa<<endl;
    cout<<"PF: "<<pf<<endl;
    cout<<"ESI: "<<esi<<endl;
    cout<<"Grass salary: "<<gs<<endl;
    cout<<"Grass for one year salary: "<<gs*12<<endl;
   
    if((gs*12)<600000)
    {
        cout<<gs*12<<endl;
    }
    else if((gs*12)<1000000)
    {
        cout<<(gs*12) - ((gs*12)*0.05)<<endl;
    }
    else if((gs*12)<1500000)
    {
        cout<<(gs*12) - ((gs*12)*0.1)<<endl;
    }
    else if((gs*12)<2000000)
    {
        cout<<(gs*12) - ((gs*12)*0.2)<<endl;
    }
    else
    {
        cout<<(gs*12) - ((gs*12)*0.3)<<endl;
    }
   
   
    return 0;
}