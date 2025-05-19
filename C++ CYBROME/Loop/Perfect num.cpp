# include <iostream>
using namespace std;
int main()
{
	int n= 6;
	int sum = 0;
	int i = 1;
	while(i<n){
		if(n%i==0)
		{
			sum = sum + i;
		}
		i++;
	}
	if(n==sum)
	{
		cout<<"Num is perfect";
	}
	else{
		cout<<"Not perfect";
	}
	
 return 0; 
}
