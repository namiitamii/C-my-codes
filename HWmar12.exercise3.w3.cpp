#include<iostream>

using namespace std;

int main(){
	int n , sum = 0;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	
	for(int i = 1 ; i<=n ; i++){
		sum = sum + i;
	}
	cout<<"Sum of natural numbers 1-n: "<<sum<<endl;
	
	
	return 0;
}
