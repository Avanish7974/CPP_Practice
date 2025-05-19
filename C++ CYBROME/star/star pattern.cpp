#include <iostream>
using namespace std;

int main()
{
   int n = 27;
   for(int i = 1 ; i<=n; i++)
   {
   	for(int j = 1; j<= n; j++)
	   {
   		if(i == 1 or i ==n or j==1 or j==n or i == j or j ==(n-i+1))
   		cout<<"9";
   		else
   		cout<<"-";
	   }
	   cout<<endl;
   } 
   
   
   
    return 0;
}