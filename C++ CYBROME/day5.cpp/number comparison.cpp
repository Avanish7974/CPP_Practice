# include <iostream>
using namespace std;
int main()
{
	int a,b,c ;
	cout<<"Enter yor first number : "<<endl;
	cin>>a;
	
	cout<<"Enter yor second number : "<<endl;
	cin>>b;
	 
	cout<<"Enter yor third number : "<<endl;
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		cout<<"A is max";
		else
		cout<<"C is max";
	}
	else
	{
		if(b>c)
		cout<<"B is max";
		else
		cout<<"C is max";
	}
	
 return 0; 
}
