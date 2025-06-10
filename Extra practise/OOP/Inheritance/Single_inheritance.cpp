#include<iostream>
using namespace std;

class Parent{
	public:
	Check(){
		cout<<"I'm Parent"<<endl;
	}
};
class Child:public Parent{
	public:
	display(){
		cout<<"I'm Child"<<endl;
	}
};
int main(){
	Child c;
	c.display();
	c.Check();
}
