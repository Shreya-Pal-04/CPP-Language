#include<iostream>
using namespace std;

class student{
	private:
		int age;
		
	public:
	void setAge(int a){
		age = a;
	}
	void showAge(){
		cout<<"Age is "<<age;
	}
};
int main(){
	student seya;
	seya.setAge(20);
	seya.showAge();
	return 0;	
}
