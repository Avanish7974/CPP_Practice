# include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter nums : ";
	cin>>a>>b;
	
	int hcf,i=1,mx;
	mx = (a>b)?a:b;
	while(i <= mx){
		if(a%i == 0 and b%i == 0)
		{
			hcf = i;
			cout<<"Value of i is"<<i<<endl;
		}
		i++;
	}
	cout<<hcf;
 return 0; 
}

