// Percentage of Given numbers

#include<iostream>
using namespace std;
int main(){

    int s1,s2,s3,s4,s5;
   
    

    cout<<"Enter 1 Subject marks  : ";
    cin>>s1;
    cout<<"Enter 2 Subject marks  : ";
    cin>>s2;
    cout<<"Enter 3 Subject marks  : ";
    cin>>s3;
    cout<<"Enter 4 Subject marks  : ";
    cin>>s4;
    cout<<"Enter 5 Subject marks  : ";
    cin>>s5;

    int total = s1+s2+s3+s4+s5;

    cout<<"total sum is "<<total<<endl;
    cout<<"Total percentage is "<<((float)total/500)*100<<"%";


    return 0;
}