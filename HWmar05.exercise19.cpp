#include<iostream>

using namespace std;


int main(){
	
	double ph,ch,bio,math,com;
	
	/*Write a C program to input marks of five subjects 
	Physics, Chemistry, Biology, Mathematics and Computer,
	calculate percentage and grade according to given conditions:
    If percentage >= 90% : Grade A
    If percentage >= 80% : Grade B
    If percentage >= 70% : Grade C
    If percentage >= 60% : Grade D
    If percentage >= 40% : Grade E
    If percentage < 40% : Grade F.*/
	
	cout<<"Input marks of Physics: "<<"\t";
	cin>>ph;
	cout<<"Input marks of Chemistry: "<<"\t";
	cin>>ch;
	cout<<"Input marks of Biology: "<<"\t";
	cin>>bio;
	cout<<"Input marks of Mathematics: "<<"\t";
	cin>>math;
	cout<<"Input marks of Computer: "<<"\t";
	cin>>com;
	cout<<endl;
	
	
	if((ph+ch+bio+math+com)/5>=90 && (ph+ch+bio+math+com)/5<=100){ 
		cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade A";
	
	}else if((ph+ch+bio+math+com)/5>=80 && (ph+ch+bio+math+com)/5<=89){
	    cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade B";
	
	}else if((ph+ch+bio+math+com)/5>=70 && (ph+ch+bio+math+com)/5<=79){
	    cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade C";
	
	}else if((ph+ch+bio+math+com)/5>=60 && (ph+ch+bio+math+com)/5<=69){
	    cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade D";
	
	}else if((ph+ch+bio+math+com)/5>=40 && (ph+ch+bio+math+com)/5<=59){
	    cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade E";
	
	}else if((ph+ch+bio+math+com)/5<=39){
	    cout<<"Percentage = "<<(ph+ch+bio+math+com)/5<<endl;
		cout<<"Grade F";
	
	}
	
		
	return 0;	
}
