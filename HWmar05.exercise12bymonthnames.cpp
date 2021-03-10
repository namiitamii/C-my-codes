#include<iostream>

using namespace std;


int main(){
	
	int m;
	
	cout<<"Enter month by number (1-12): ";
	cin>>m;
	cout<<endl;
	
	if(m==1){ 
		cout<<"January contains 31 days.";
	}else if(m==2){ 
		cout<<"February contains 29 days (28 days once in every 4 years).";
	}if(m==3){ 
		cout<<"March contains 31 days.";
	}if(m==4){ 
		cout<<"April contains 30 days.";
	}if(m==5){ 
		cout<<"May contains 31 days.";
	}if(m==6){ 
		cout<<"June contains 30 days.";
	}if(m==7){ 
		cout<<"July contains 31 days.";
	}if(m==8){ 
		cout<<"August contains 31 days.";
	}if(m==9){ 
		cout<<"September contains 30 days.";
	}if(m==10){ 
		cout<<"October contains 31 days.";
	}if(m==11){ 
		cout<<"November contains 30 days.";
	}if(m==12){ 
		cout<<"December contains 31 days.";
	}
		
	return 0;	
}
