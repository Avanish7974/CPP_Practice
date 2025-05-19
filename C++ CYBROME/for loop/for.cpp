// #include<iostream>
// using namespace std;
// int main(){

//    for (int i = 1; i <= 10; i++)
//    {
//     cout<<i<<endl;
//    }
   

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){

//     int odd = 0,even = 0;
//     for (int i = 1; i<=100; i++)
//     {
//         if(i%2 == 0)
//         {
//             even += i;
//         }
//         else{
//             odd += i;
 
//         }
//     }
//     cout<<"Odd : "<<odd<<endl;
//     cout<<"Even : "<<even<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){

    int odd = 0,even = 0,num = 0;
    for (int i = 1; i<=100; i++)
    {
        if(i%3 == 0)
        {
            even += i;
        }
        if(i%5 == 0)
        {
            odd += i;
        }
        if(i%7 == 0)
        {
            num += i;
        }
       
    }
    cout<<"Odd"<<odd<<endl;
    cout<<"Even"<<even<<endl;
    cout<<"num"<<num<<endl;

    return 0;
}