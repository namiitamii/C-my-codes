#include<iostream>

using namespace std;


int main(){
	
	char ch;
	
	cout<<"Enter any character: ";
	cin>>ch;
	cout<<"\n";
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){ 
		cout<<ch<<" is an Alphabet";
	}else if ( ch>='0' && ch<='9'){
		cout<<ch<<" is an Number";
	}else{
		cout<<ch<<" Neither Alphabet nor Number";
	}
		
		
	return 0;	
}
