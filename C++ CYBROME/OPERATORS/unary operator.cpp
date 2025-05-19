//unary operator ++ --
# include <iostream>
using namespace std;
int main()
{
	int x = 10;
//	for ++
	x++;
	x = ++x + x++ + ++x;
    cout<<x<<endl;

 return 0; 
}


