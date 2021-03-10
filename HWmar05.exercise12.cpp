#include<iostream>

using namespace std;


int main(){
	
	int m;
	
	cout<<"Enter month by number (1-12): ";
	cin>>m;
	cout<<endl;
	
	if(m==1 || m==3 || m==5 || m==7 || m==8|| m==10 || m==12){ 
		cout<<"This month contains 31 days.";
	}else if (m==4 || m==6 || m==9 || m==11){
		cout<<"This month contains 30 days.";
	}else if(m==2){ 
		cout<<"This month contains 29 days (28 days once in every 4 years).";
	}
		
	return 0;	
}
