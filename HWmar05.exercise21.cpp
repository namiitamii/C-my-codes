#include<iostream>

using namespace std;


int main(){
	
	double u;
	
	/*Write a C program to input electricity unit charge and 
	calculate the total electricity bill according to the given condition:
    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill. */
	
	cout<<"Input unit number: ";
	cin>>u;
	cout<<endl;
	
	
	
	if (u<=50){
		cout<<"Total electricity bill of your unit: "<<(u*0.50)+((u*0.50)*0.2);
	}else if (u>=51 && u<=150){
		cout<<"Total electricity bill of your unit: "<<(u*0.75)+((u*0.75)*0.2);
	}else if (u>=151 && u<=250){
		cout<<"Total electricity bill of your unit: "<<(u*1.20)+((u*1.20)*0.2);
	}else if (u>=251){
		cout<<"Total electricity bill of your unit: "<<(u*1.50)+((u*1.50)*0.2);
	}
	
		
	return 0;	
}
