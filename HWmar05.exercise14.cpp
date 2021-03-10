#include<iostream>

using namespace std;


int main(){
	
	int a,b,c;
	
	cout<<"Check whether a triangle is valid or not."<<endl<<endl;
	
	cout<<"Input first angle: ";
	cin>>a;
	cout<<"Input first angle: ";
	cin>>b;	
	cout<<"Input first angle: ";
	cin>>c;
	cout<<endl;
	
	
	if(a+b+c==180){ 
		cout<<"The triangle is valid"<<endl;
	}else {
		cout<<"The triangle is not valid"<<endl;
    }
	
		
	return 0;	
}
