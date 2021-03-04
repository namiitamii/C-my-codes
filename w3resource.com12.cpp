#include<iostream>

using namespace std;


int main(){
	int x;
	int y;
	double z,s;
	
	cout<<"Enter 'Employees ID' : ";
	cin>>x; 
	
	if(x<9999999999){
		cout<<"Inter hours that you worked in past mount: ";
	    cin>>y;
	    cout<<endl;
	    
	    z = 15.00;
		s = y * z;
	
		cout<<"Employees ID: "<<x;
		cout<<endl;
		cout<<"Salary = U$"<<s<<endl;
		cout<<endl;
	}else {
		cout<<"Must be 10 or less integers";
	}
	cout<<endl;
	
	
	
	
	
	
		
	return 0;	
}
