#include <iostream>
using namespace std;
int main(){

    int n = 123;
    int r,s = 0;
    cout<<n<<endl;

    n= n/10;
    r = n%10;
    s = s*10 + r;

    n= n/10;
    r = n%10;
    s = s*10 + r;

    n= n/10;
    r = n%10;
    s = s*10 + r;

     n= n/10;
    r = n%10;
    s = s*10 + r;

    cout<<s;

    int age;
    cout<<"Enter your age  : ";
    cin>>age; 


    if(age >= 18)
    {
        cout<<"You can vote ";
    }

    else 
    {
        "You can not vote ";
    }
    wrie a program to check the moving direction of a vehicle by the speed of vehicle if the speed is negative print moving in reverse and if the positive print vehicle forward and in zero rest

    int a,b;
    cout<<"enter numbers : ";
    cin>>a>>b;

    cout<<"NUM 1"<<a<<endl;
    cout<<"NUM 2"<<b<<endl;

    if(a>b)
    {
        cout<<"NUM 1 is max"<<a;
    }
    else
    {
        cout<<"NUM 2 is max"<<b;
    }


    

    

    

    


    return 0;
}