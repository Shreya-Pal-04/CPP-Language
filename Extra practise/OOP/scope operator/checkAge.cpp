#include<iostream>
using namespace std;

class student{
	public:
		void data();
		void checkAge(int age);
};
void student::data(){
	int a,b;
	cout<<"Enter number of a:- ";
	cin>>a;
	cout<<"Enter number of b:- ";
	cin>>b;
	cout<<"Ans :- "<<a+b<<endl;
}
void student::checkAge(int age){
	if(age>=18){
		cout<<"You can vote"<<endl;
	}else{
		cout<<"you can't vote "<<endl;
	}
}
int main(){
	student s;
	s.data();
	s.checkAge(20);
	return 0;
}
