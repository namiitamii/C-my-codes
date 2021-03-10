#include<iostream>

using namespace std;


int main(){
	
	int m,amt;
	
	cout<<"Input $ amount: ";
	cin>>m;
	cout<<endl;
	
	cout<<"Total number of notes: "<<endl;
	
	if(m>=100){ 
		cout<<"$100: "<<m/100<<endl;
	}else {
		cout<<"$100: 0"<<endl;
    }
	
	if(m%100>=50){
		cout<<"$50:"<<(m%100)/50<<endl;
	}else {
		cout<<"$50: 0"<<endl;
    }

	if((m%100)%50>=20){
		cout<<"$20:"<<((m%100)%50)/20<<endl;
	}else {
		cout<<"$20: 0"<<endl;
    }
	
	if(((m%100)%50)%20>=10){
		cout<<"$10:"<<(((m%100)%50)%20)/10<<endl;
	}else {
		cout<<"$10: 0"<<endl;
	}
	
	if((((m%100)%50)%20)%10>=5){
		cout<<"$5:"<<((((m%100)%50)%20)%10)/5<<endl;
	}else {
		cout<<"$5: 0"<<endl;
	}
	
	if(((((m%100)%50)%20)%10)%5>=1){
		cout<<"$1:"<<((((((m%100)%50)%20)%10)%5)/1)<<endl;
	
	}else {
		cout<<"$1: 0"<<endl;
	}
		
	return 0;	
}
