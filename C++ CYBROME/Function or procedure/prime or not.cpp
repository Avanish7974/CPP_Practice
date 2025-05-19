# include <iostream>
using namespace std;


bool ispalindrome(int n)
{
	int t = n;
	int rev = 0;
	int r = 0;
	while(t>0)
	{
	
	 r = n%10;
     rev = rev*10+r;
     t = t/10; 
 }
    if(rev==n)
	return true;
	else
	return false;
    
}
int main()
{
	 int arr[] = {12,13,14,15,16,17,18,121};
	 int s = sizeof(arr)/4;
	 for(int i=0; i<s;i++)
	 {
	 	if(ispalindrome(arr[i]))
	 	{
	 		cout<<arr[i]<<"Is palindrom"<<endl;
		 }
		else
		{
			cout<<arr[i]<<"Is not palindrome"<<endl;
		 } 
	 }
	 
	
 return 0; 
}
