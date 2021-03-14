#include<iostream>

using namespace std;

int main(){
	int n, cube = 0;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	
	for(int i = 1 ; i<=n ; i++){
		cout<<"Number is: "<<i<<" ";	
		cout<<"and cube of number: "<<i*i*i<<endl;
	}
		

	return 0;
}
