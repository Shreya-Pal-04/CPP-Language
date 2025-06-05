#include<iostream>
using namespace std;

class student{
	private:
		int age,rollno;
		string name;
	public:
	void setAge(int rollno,string name,int age){
		this -> rollno = rollno;
		this -> name = name;
		this -> age = age;
	}
	void getAge(){
		cout<<"Student Roll No: "<<this->rollno<<endl;
		cout<<"Student Name: "<<this->name<<endl;
		cout<<"Student Age: "<<this->age<<endl;
	}
};
main(){
	student st,st1,st2;
	st.setAge(01,"Ram",18);
	st1.setAge(02,"Shyam",19);
	st2.setAge(03,"Kyam",20);
	
	st.getAge();
	st1.getAge();
	st2.getAge();
}
