#include<iostream>

using namespace std;


int main(){
	
	int x,y;
	
	/*Write a C program to input cost price and selling 
	price of a product and check profit or loss. 
	Also calculate total profit or loss using if else. 
	How to calculate profit or loss on any product using if else
	in C programming. Program to calculate profit and 
	loss of any product in C.*/
	
	cout<<"Input cost price: ";
	cin>>x;
	cout<<"Input selling price: ";
	cin>>y;	
	cout<<endl;
	
	
	
	if(y-x>0){ 
		cout<<"PROFIT: "<<y-x;
	}else if (y-x<0){
		cout<<"LOSS!: "<<y-x;
	}
	
		
	return 0;	
}
