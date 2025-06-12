#include<iostream>
using namespace std;

class shapes{
	public:
		virtual void draw(){
			cout<<"Drawing Shapes";
		}
};
class circle:public shapes{
	public:
		void draw() override{
			int r;
			float ans;
			cout<<"Enter Radius: ";
			cin>>r;
			ans = 3.14 * r * r;
			cout<<"Circle Area: "<<ans<<endl;
		}
};
class Triangle:public shapes{
	public:
		void draw() override{
			int h,b;
			float ans;
			cout<<"Enter Triangle base: ";
			cin>>b;
			cout<<"Enter Triangle Hight: ";
			cin>>h;
			ans = 0.5 *b*h;
			cout<<"Triangle Area is: "<<ans<<endl;
		}
};
class rectangle:public shapes{
	public:
		void draw() override{
			int h,w;
			float ans;
			cout<<"Enter Hight: ";
			cin>>h;
			cout<<"Enter Width ";
			cin>>w;
			ans = h*w;
			cout<<"Rectangle Area is: "<<ans<<endl;
		}
};
int main(){
	shapes* s;
	
	rectangle r;
	Triangle t;
	circle c;
	
	s = &r;
	s->draw();
	
	s = &t;
	s->draw();
	
	s=&c;
	s->draw();
}
