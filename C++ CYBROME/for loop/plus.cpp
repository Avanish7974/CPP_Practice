# include <iostream>
using namespace std;
int main()
{
	int n = 21;
	int mid = (n+1)/2;
	for(int i = 1; i <= n;i++)
	{
		for (int j = 1;j<=n;j++ )
		{
			if(i==mid or j==mid)
			cout<<"* ";
			else
			cout<<" ";
			
		}
		cout<<endl;
	}
 return 0; 
}
