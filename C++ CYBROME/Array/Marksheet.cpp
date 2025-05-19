#include <iostream>
using namespace std;

int main()
{
    int arr[5][3];
    int ttl = 0;
    int top=0, troll=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter the marks of student roll: "<<i+1<<" sub: "<<j+1<<" ";
            cin>>arr[i][j];
           
        }
        cout<<endl;
    }
    cout<<"Sr no. "<<"SUB 1"<<"\t"<<"SUB 2"<<"\t"<<"SUB 3"<<"\t"<<"Total"<<"\t"<<"%"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"S-00"<<i+1<<"\t";
        for(int j=0; j<3; j++)
        {
            ttl+= arr[i][j];        
            cout<<arr[i][j]<<"\t";
        }
        cout<<ttl<<"\t"<<float(ttl)/3;
        if(ttl > top)
        {
            top = ttl;
            troll = i;
        }
        cout<<endl;
        ttl = 0;
    }
   
    cout<<endl<<endl<<"Toper of the class roll number 0133CS09100"<<troll+1<<" and marks are "<<top<<endl;
    return 0;
} 