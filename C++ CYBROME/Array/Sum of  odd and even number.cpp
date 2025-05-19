# include <iostream>
using namespace std;
int main()
{
	int arr[10] = {4,9,15,13,24,13,12,11,19,89};
	int sum_odd = 0 , sum_even = 0;
	for(int i = 0; i<10; i++)
	{
		if(arr[i] % 2 == 0)
		{
			sum_even = sum_even + arr[i];
			
		}
		else{
			sum_odd = sum_odd + arr[i];
		}
	}
	cout<<"Sum Of Odd Numbers : "<<sum_odd<<endl;
	cout<<"Sum of Even numbers : "<<sum_even<<endl;
 return 0; 
}
