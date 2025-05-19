//Ternary operator
# include <iostream>
using namespace std;
int main()
{
	int a = 12;
	int b = 13;
	int c = 14;
	int d = 115;
	int e , f ,g;
	
//	for two digit
	e = (a>b)?(a):(b);
    cout<<e<<endl;
    
//    for three digit
    f =  (a > b)? ((a > c) ? a : c ) : ((b > c)? b : c );
	cout<<f<<endl;
	
//	for four digit

	g = (a > b) ? ((a > c) ? ((a > d) ? a : d)  : ((c > d) ? c : d)) :
	    
		          ((b > c)  ? ((b > d) ? b : d)  : ((c > d) ? c : d));

	cout<<g;
	
	
	
 return 0; 
}
