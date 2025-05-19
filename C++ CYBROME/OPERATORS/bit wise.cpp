// Bitwise Operator

# include <iostream>

using namespace std;
int main()
{
	
	int x = 9;
	int y = 12;
	int a = x&y;
    int b = x|y;
    int c = x^y;
    int d = ~x;
    int e = 9<<2;
    int f = 9>>2;
//    and
	cout<<a<<endl;
//	or
	cout<<b<<endl;
//	xor
    cout<<c<<endl; 
//    compliment
    cout<<d<<endl;
//    Left Shift
    cout<<e<<endl;
//    Right Shift
    cout<<f<<endl; 
	
	      
 return 0; 
}