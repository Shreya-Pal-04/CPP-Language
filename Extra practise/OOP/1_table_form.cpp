#include<iostream>
using namespace std;

class student{
	public:
		int age;
		string name;
		void setDetail(string name,int age){
			this->name = name;
			this->age = age;
		}
		void getDetail(){
			cout<<endl<<this->name<<"                               "<<this->age<<endl;
			cout<<"-------------------------------------------------------------"<<endl;;
		}
};
int main(){
	student s[3];
	int n,age,i;
	string name;
	
	cout<<"How many insert record :- ";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"Enter student name: ";
		cin>>name;
		cout<<"Enter student Age :- ";
		cin>>age;
		s[i].setDetail(name,age);
	}
	cout<<endl<<endl<<"Name                                "<<"Age"<<endl;
	for(i=0;i<n;i++){
		s[i].getDetail();
	}
}
