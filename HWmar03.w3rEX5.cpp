#include<iostream>

using namespace std;


int main(){
	
	int year,x ;
	

	cout<<"Enter your born year: ";
	cin>>year;
	cout<<endl;
	
	x=2021;
	
	if(x-year >= 21){ 
		cout<<"Congratulation! You are eligible for casting your vote.";
	}else{
		cout<<"You not are eligible for casting your vote!";
	}
		
		
	return 0;	
}
