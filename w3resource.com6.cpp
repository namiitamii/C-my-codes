#include<iostream>

using namespace std;


int main(){
	double c , p , r , a;
	//Perimeter of the Circle = 2*p*r
	//Area of the Circle = p*r^2 "(1/2)*r*(2*p*r)"
	
	
	r = 6; //Radius of the Circle
	p = 3.14; 
	
	c = 2*p*r;
	a = p*r*r;
	
	

	cout<<"Perimeter of the Circle: "<<c<<endl;
	cout<<"Area of the Circle: "<<a<<endl;
	
	
		
	return 0;	
}
