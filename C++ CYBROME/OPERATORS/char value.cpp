# include <iostream>
using namespace std;
int main()
{
    
 char a = 'A';
 char b = 'V';
 char c = 'A';
 char d= 'N';
 char e = 'I';
 char f = 'S';
  char g = 'H';
  
  char h = 'K';
  char i = 'A';
  char j = 'U';
  char k = 'S';
  char l = 'H';
  char m = 'A';
  char n = 'L';
  char z =  'Z';
  
  int sum1 = a+b+c+d+e+f+g;
  int sum2  = h+i+j+k+l+m+n+z;
  int sum3 = sum1 - sum2;
  
  cout<<"Name value of avanish is : "<<sum1<<endl;
  cout<<"Name value of kaushal is : "<<sum2<<endl;
  
  sum3 = abs(sum3);
  
  cout<<"Total of char : "<<sum3;
 
 return 0; 
}
