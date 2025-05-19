# include <iostream>
using namespace std;
int main()
{
	int n = 5;
	for(int i=1 ;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
		
               
			   if(j<=i)
			   {
			   	cout<<n<<" * "<<i<<" = "<<n*i;
			   }
			   else{
			   	cout<<" ";
			   }
	       

		}
		cout<<endl;
	}

  return 0; 
}
	
//	for(int m = 1;m<=10;m++ )
//	{
//		
//		cout<<j<<" * "<<m<<" = "<<j*m<<endl;
//	}
