#include<iostream>

using namespace std;


int main(){
	
	char ch;
	
	cout<<"Enter any character: ";
	cin>>ch;
	cout<<endl;
	
	if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){ 
		cout<<ch<<" is an Vowel";
	}else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){ 
		cout<<ch<<" is an Alphabet but not Vowel";
	}else {
		cout<<" is neither vowel nor consonant";
	}
		
		
	return 0;	
}
