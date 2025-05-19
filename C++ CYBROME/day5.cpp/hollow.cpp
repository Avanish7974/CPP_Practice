//Program to print 10
# include <iostream>
using namespace std;
int main()
{
		int n =11;
		int mid = (n+1)/2;
		
	for(int i=1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++ )
		{
		    if(j==n or i==n or j == (n-i)+1) 
            {
            	cout<<"*";
			}
			
			else{
				cout<<" ";
			}
			
			
		}
		
		cout<<endl;
	}
	

		
	
 return 0; 
}
