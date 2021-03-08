#include<iostream>

using namespace std;


int main(){
	
	int year ;
	
	cout<<"Lets find out whether a given year is a leap year or not";
	cout<<endl<<endl;

	cout<<"Enter a year: ";
	cin>>year;
	cout<<endl;
	
	if(year%4 > 0){ 
		cout<<"Entered year is a common year";
	}else if(year%100 >0){
		cout<<"Entered year is a LEAP year";
	}else if(year%400 >0){
		cout<<"Entered year is a common year";
	}else{
		cout<<"Entered year is LEAP year";
	}
		
		
	return 0;	
}
