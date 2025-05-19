#include <iostream>
using namespace std;

int main()
{
    int arr[5][7];
    int ttl = 0;
    int top=0, troll=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<7; j++)
        {
            cout<<"Enter the temperature: "<<i+1<<" sub: "<<j+1<<" ";
            cin>>arr[i][j];
           
        }
        cout<<endl;
    }
    cout<<"Sr no. "<<"Tem 1"<<"\t"<<"Tem 2"<<"\t"<<"Tem 3"<<"\t"<<"Tem 4"<<"\t"<<"Tem 5"<<"\t"<<"Tem 6"<<"\t"<<"Tem 7"<<"\t"<<"Total"<<"\t"<<"%"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"S-00"<<i+1<<"\t";
        for(int j=0; j<7; j++)
        {
            ttl+= arr[i][j];        
            cout<<arr[i][j]<<"\t";
        }
        cout<<ttl<<"\t"<<float(ttl)/7;
        if(ttl > top)
        {
            top = ttl;
            troll = i;
        }
        cout<<endl;
        ttl = 0;
    }
//   
//    cout<<endl<<endl<<"Toper of the class roll number 0133CS09100"<<troll+1<<" and marks are "<<top<<endl;
    return 0;
}