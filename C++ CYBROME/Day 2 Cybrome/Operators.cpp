# include <iostream>
using namespace std;
int main()
{
	int x = 100;
	int y = 200;
	int a = x+y;
	int b = x-y;
	int c = x*y;
	int d = x/y;
	int e = x%y;
	cout<<"The add is : "<<a<<endl;
	cout<<"The sub is : "<<b<<endl;
	cout<<"The mul is : "<<c<<endl;
	cout<<"The div is : "<<d<<endl;
	cout<<"The mod is : "<<e<<endl;
 return 0; 
}
#include <iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5;
   
    cout<<"Eneter subject 1 Marks: ";
    cin>>s1;
    cout<<"Eneter subject 2 Marks: ";
    cin>>s2;
    cout<<"Eneter subject 3 Marks: ";
    cin>>s3;
    cout<<"Eneter subject 4 Marks: ";
    cin>>s4;
    cout<<"Eneter subject 5 Marks: ";
    cin>>s5;
   
    float total = s1+s2+s3+s4+s5;
    cout<<"Total Marks : "<<total<<endl;
   
    cout<<(total/5)<<"%";
   
    return 0;
}