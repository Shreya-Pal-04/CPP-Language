#include<iostream>
using namespace std;

class A{
	public:
		int age;
};
class B:public A{
	public:
		int printAge(){
			cout<<"Enter your Age: "<<endl;
			cin>>age;
		}
};
class C:public A{
	public:
		void chechAge(){
			if(age<=18){
				cout<<"You can vote."<<endl;
			}else{
				cout<<"You cannot vote."<<endl;
			}
		}
};
int main(){
	C c;
	B b;
	b.printAge();
	c.chechAge();
}
