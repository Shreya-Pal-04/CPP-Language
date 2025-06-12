#include<iostream>
using namespace std;

class shape{
	public:
		virtual void draw() = 0;
};
class circle:public shape{
	public:
		void draw(){
			int r;
			float ans;
			cout<<"Enter Radius: ";
			cin>>r;
			ans = 3.14 * r  * r;
			cout<<"Area of Circle: "<<ans<<endl;
		}
};
class Triangle:public shape{
	public:
		void draw(){
			int h,b;
			float ans;
			cout<<"Enter base: ";
			cin>>b;
			cout<<"Enter hight: ";
			cin>>b;
			ans = 0.5 *b * h;
			cout<<"Area of Triangle: "<<ans<<endl;
		}
};
int main(){
	shape* s;
	circle c;
	Triangle t;
	
	s = &c;
	s->draw();
	s = &t;
	s->draw();
}
