#include <iostream>
using namespace std;

int main()
{
//    D = 0.011
//    K = 0.0035
//    N = 1.60
//    E  = 0.011
//    Y = 1.78
char ch;
double rs;
cout<<"Enter Indian Cur: ";
cin>>rs;
cout<<"Choose alphabat for convert money: ";
cout<<"\n D = 0.011\n K = 0.0035\n N = 1.60\n E  = 0.011\n Y = 1.78"<<endl;
cin>>ch;
 switch(ch)
 {
     case 'D':{
         cout<<rs*0.011;
        break;
     }
     case 'K':{
         cout<<rs*0.0035;
        break;
     }
     case 'N':{
         cout<<rs*1.6;
        break;
     }
     case 'E':{
         cout<<rs*0.011;
        break;
     }
     case 'Y':{
         cout<<rs*1.78;
        break;
     }
     default:{
         cout<<"Choose valid char ";
        break;
     }
 }


    return 0;
}