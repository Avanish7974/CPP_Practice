# include <iostream>
using namespace std;
void my_add()
{
	int a,b;
	cout<<"Enter num1 : ";
	cin>>a;
	cout<<"Enter num2 : ";
	cin>>b;
	
	cout<<"Addition is : "<<a+b<<endl;
}
int main()
{
	for(int i = 0;i<5;i++)
	my_add();
 return 0; 
}
