#include<iostream>

using namespace std;


int main(){
	
	double s;
	
	/*Write a C program to input basic salary of an employee and 
	calculate gross salary according to given conditions.
    Basic Salary <= 10000 : HRA = 20%, DA = 80%
    Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
    Basic Salary >= 20001 : HRA = 30%, DA = 95% */
	
	cout<<"Input basic salary of an employee: ";
	cin>>s;
	cout<<endl;
	
	
	
	if (s<=10000){
		cout<<"Gross salary of employee = "<<(s*0.2)+(s*0.8)+s;
	}else if (s>=10001 && s<=20000){
		cout<<"Gross salary of employee = "<<(s*0.25)+(s*0.9)+s;
	}else if (s>=20001){
		cout<<"Gross salary of employee = "<<(s*0.3)+(s*0.95)+s;
	}
	
		
	return 0;	
}
