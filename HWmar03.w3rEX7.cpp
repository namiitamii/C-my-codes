#include<iostream>

using namespace std;


int main(){
	
	double h,x ;
	
	cout<<"Average adult height in America 175.4 centimeter";
	cout<<endl<<endl;

	cout<<"Enter your height in centimeter: ";
	cin>>h;
	cout<<endl;
	
	x=175.4;
	
	if(x<=h){ 
		cout<<"The person is average";
	}else{
		cout<<"The person is shorter than average";
	}
		
		
	return 0;	
}
