# include <iostream>
using namespace std;
int main()
{
	char gender;
	int height;
	
	cout<<"Enter your Gender M or F : " ;
	cin>>gender;
	
//	cout<<"Enter your height : ";
//	cin>>height;
	
	if(gender == 'M'){
		cout<<"Enter your height : ";
	     cin>>height;
		if(height >= 5){
			cout<<"You are eligible for driving license";
		}else{
			cout<<"Your height is not eligible for license";
		}
	}else if(gender == 'F'){
		cout<<"Enter your height : ";
	    cin>>height;
		if(height >= 6){
			cout<<"You are eligible for driving license";
		}else{
			cout<<"Your height is not eligible for license";
		}
	} else{
		cout<<"Enter valid data";
	}
 return 0; 
}
