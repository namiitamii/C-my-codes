#include<iostream>

using namespace std;


int main(){
	
	int a,b,c;
	
	/*Write a C program to input side of a triangle and 
	check whether triangle is valid or not using if else. 
	How to check whether a triangle can be formed or not if 
	sides of triangle is given using if else in C programming. 
	Logic to check triangle validity if sides are given in C program.*/
	
	cout<<"Input first side: ";
	cin>>a;
	cout<<"Input first side: ";
	cin>>b;	
	cout<<"Input first side: ";
	cin>>c;
	cout<<endl;
	
	
	if((a+b)>c && (a+c)>b && (b+c)>a){ 
		cout<<"The triangle is valid"<<endl;
	}else {
		cout<<"The triangle is not valid"<<endl;
    }
	
		
	return 0;	
}
