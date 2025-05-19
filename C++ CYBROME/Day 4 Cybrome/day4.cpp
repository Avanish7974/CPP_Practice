// temperature conversion celsius to fahrenheit
#include<iostream>
using namespace std;
int main (){

    float f,c,k;
    cout<<"Enter Temperature in Celsius : ";
    cin>>c;

    f = c * (9/5) + 32;
    cout<<"New temperatur in F : "<<f<<endl;




// temperature conversion celsius to kelvin


    
    cout<<"Enter Temperature in Celsius : ";
    cin>>c;

    k = c + 273.15 ;
    cout<<"New temperatur in K : "<<k<<endl;




// temperature conversion kelvin to fahrenheit

    cout<<"Enter Temperature in kelvin : ";
    cin>>k;

    f = (k - 273.15) * 9/5 + 32 ;
    cout<<"New temperatur in Fahrenheit : "<<f<<endl;




// temperature conversion kelvin to celsius

    cout<<"Enter Temperature in kelvin : ";
    cin>>k;

    c = k - 273.15 ;
    cout<<"New temperatur in celsius : "<<c<<endl;



// temperature conversion fahrenheit to kelvin


  
    cout<<"Enter Temperature in fahrenheit : ";
    cin>>f;

    k = (f - 32) * 5/9 + 273.15 ;
    cout<<"New temperatur in kelvin : "<<k<<endl;

    return 0;
}





