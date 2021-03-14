#include<iostream>

using namespace std;

int main(){
	double n,n1,n2,n3,n4,n5,n6,n7,n8,n9,sum,ave;
	
	cout<<"Enter numbers in next 10 row"<<endl;
	cout<<"Number - 1: ";
	cin>>n; 
	cout<<"Number - 2: ";
	cin>>n1;
	cout<<"Number - 3: ";
	cin>>n2;
	cout<<"Number - 4: ";
	cin>>n3;
	cout<<"Number - 5: ";
	cin>>n4;
	cout<<"Number - 6: ";
	cin>>n5;
	cout<<"Number - 7: ";
	cin>>n6;
	cout<<"Number - 8: ";
	cin>>n7;
	cout<<"Number - 9: ";
	cin>>n8;
	cout<<"Number - 10: ";
	cin>>n9;
	cout<<endl;
	
	sum=n+n1+n2+n3+n4+n5+n6+n7+n8+n9;
	ave=sum/10;
	
	cout<<"Summary of 10 numbers above: "<<sum<<endl;
	cout<<"Average of 10 numbers you entered: "<<ave<<endl;
	
	return 0;
}
