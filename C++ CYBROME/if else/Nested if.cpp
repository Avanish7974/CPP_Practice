#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
   
    if(n>0)
    {
        cout<<"Num is +ve"<<endl;
        if(n%2==1)
        {
            cout<<"Num is ODD"<<endl;
            if(n%5==0)
            {
                cout<<"Num is div by 5"<<endl;
                if(n%3 != 0)
                {
                    cout<<"We got lucky number"<<endl;
                }
                else
                {
                    cout<<"Sorry well tried"<<endl;
                }
            }
            else
            {
                cout<<"Num is not div by 5"<<endl;
            }
        }
        else
        {
            cout<<"Num is even"<<endl;
        }
    }
    else
    {
        cout<<"Num is -ve"<<endl;
    }
    return 0;
}
