# include <iostream>
using namespace std;
int main()
{
	int n  = 11;
	int f = 0;
	int i = 1;
	
	while(i <= n){
	
	if(n%i == 0){
		f++;
	}
	i++;
}
if(f==2){
	cout<<"Number is Prime";
	
}
else{
	cout<<"Number is not prime";
}
	
 return 0; 
}
