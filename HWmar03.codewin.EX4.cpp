#include<iostream>

using namespace std;


int main(){
	
	int number;
	
	cout<<"Enter any number you want to check whether a number is divisible by 5 and 11 or not";
	cout<<endl<<endl;
	
	cout<<"Enter your number here: ";
	cin>>number;
	cout<<endl;
	
	
	if(number%5==0 && number%11==0){ 
		cout<<"Number is divisible by 5 and 11";
	}else if(number%5==0){
		cout<<"This number only divisible by 5";
	}else if(number%11==0){
		cout<<"This number only divisible by 11";
	}else {
		cout<<"ERROR!!! Try again later";
	}
		
		
	return 0;	
}
