#include<iostream>

using namespace std;


int main(){
	
	int a,b,c;
	
	/*Write a C program to input sides of a triangle and check 
	whether a triangle is equilateral, scalene or 
	isosceles triangle using if else. How to check 
	whether a triangle is equilateral, scalene or isosceles 
	triangle in C programming. Logic to classify triangles as 
	equilateral, scalene or isosceles triangle if sides are 
	given in C program.*/
	
	cout<<"Input first side: ";
	cin>>a;
	cout<<"Input first side: ";
	cin>>b;	
	cout<<"Input first side: ";
	cin>>c;
	cout<<endl;
	
	
	if(a==b && b==c){ 
		cout<<"The triangle is EQUILATERAL";
	}else if (a!=b && b!=c && c!=a){
		cout<<"The triangle is SCALENE ";
	}else if (a==b || b==c || c==a){
		cout<<"The triangle is ISOSCELES";
	}
	
		
	return 0;	
}
