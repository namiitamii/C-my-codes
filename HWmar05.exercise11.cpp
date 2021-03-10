#include<iostream>

using namespace std;


int main(){
	
	int days;
	
	cout<<"Enter weekdays as an number (1-7): ";
	cin>>days;
	cout<<endl;
	
	if(days==1){ 
		cout<<"MONDAY";
	}else if (days==2){
		cout<<"TUESDAY";
	}else if(days==3){ 
		cout<<"WEDNESDAY";
	}else if (days==4){
		cout<<"THURSDAY";
	}else if (days==5){
		cout<<"FRIDAY";
	}else if(days==6){ 
		cout<<"SATURDAY";
	}else if (days==7){
		cout<<"SUNDAY";
    }else if (days<=8){
    	cout<<"PLEASE ENTER NUMBER 1-7";
	}
		
	return 0;	
}
