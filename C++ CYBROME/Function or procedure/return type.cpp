# include <iostream>
using namespace std;
int my_fun()
{
	int a,b;
	cout<<"Enter the value a : ";
	cin>>a;
	cout<<"Enter the value b : ";
	cin>>b;
	
	return a+b;
}
int main()
{
	
	int s = my_fun();

	cout<<"Add is :"<<s;
 return 0; 
}
