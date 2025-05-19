# include <iostream>
using namespace std;
int main()
{
	 int s1,s2,s3,s4,s5,t=0;
   
    

    cout<<"Enter s1 Subject marks  : ";
    cin>>s1;
    cout<<"Enter s2 Subject marks  : ";
    cin>>s2;
    cout<<"Enter s3 Subject marks  : ";
    cin>>s3;
    cout<<"Enter s4 Subject marks  : ";
    cin>>s4;
    cout<<"Enter s5 Subject marks  : ";
    cin>>s5;

    int total = s1+s2+s3+s4+s5;

    cout<<"total sum is "<<total<<endl;
    float p = (float(total)/500)*100;
    cout<<"Total percentage is "<<p<<"%";
    
    if(p<0 or p>100)
    	cout<<"Data is not valid";
	else if(p>80)
	
		cout<<"Grade A";
	
	else if(p>70)
	
		cout<<"Grade B";
	
	else if(p>60)
	
		cout<<"Grade C";
	
	else if(p>50)
	
		cout<<"Grade D";

	else if(p>40)
	
		cout<<"Grade E";
	
	else if(p>33)
	 
		cout<<"Grade S";
		
	
	else
		cout<<"Fail Go Study";
	

 return 0; 
}
