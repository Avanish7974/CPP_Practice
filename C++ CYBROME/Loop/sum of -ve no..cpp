# include <iostream>
using namespace std;
int main()
{
	int i = 100;
	int n = 1;
	int sum = 0;
	while(n <= i){
		if(n%2 != 0){
			sum = sum + n;
		}
		n++;
	}
	cout<<sum;
 return 0; 
}
