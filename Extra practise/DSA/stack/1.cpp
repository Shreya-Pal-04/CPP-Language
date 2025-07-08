#include<iostream>
using namespace std;
class Stack{
	private:
	int *arr;
	int top,capacity;
	
	public:
		Stack(int size){
			capacity = size;
			arr = new int[capacity];
			top= -1;
		}
		
		void push(int ele){
			if(top == capacity-1){
				cout<<"Stack is Full (Overflow)!!"<<endl;
			}else{
				cout<<"--- "<<(arr[++top]=ele)<<" added in Stack ---"<<endl;
			}
		}
		int pop(){
			if(top == -1){
				cout<<"--- Stack is Empty(Underflow) ---"<<endl;
				return -1;
			}
			return arr[top--];
		}
		int peek(){
			if(top == -1){
				cout<<"--- Stack is Empty ---"<<endl;
				return -1;
			}
			return arr[top];
		}
		void display(){
			if(top == -1){
				cout<<"--- Stack is Empty(Underflow) ---"<<endl;
			}else{
					cout<<"*** Stack Elements *** "<<endl;
					for(int i=0; i<=top; i++){
						cout<<arr[i]<<" ";
					} cout<<endl;
				}
			
		}
		~Stack(){
			delete[] arr;
		}
};
int main(){
	int size,ele,ch;
	cout<<"Enter Stack Size:- ";
	cin>>size;

	Stack s(size);
	
	do{
		cout<<endl<<"=== MENU ==="<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Peek"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. Exit"<<endl;
	
		cout<<"Enter your choice:- ";
		cin>>ch;
	
		switch(ch){
			case 1:
				cout<<"Enter Element to add:- ";
				cin>>ele;
				s.push(ele);
				break;
			case 2:
				ele = s.pop();
				if(ele != -1){
					cout<<" Popped: "<<ele<<endl;
				}
				break;
			case 3:
				ele = s.peek();
				if(ele != -1){
					cout<<" Top Element: "<<ele<<endl;
				}
				break;
			case 4:
				s.display();
				break;
			case 5:
				cout<<"~*~*~* Thank You ~*~*~*"<<endl;
				break;
			default:
				cout<<"#### Invalid Choice ####"<<endl;
		}
	}while(ch!=5);
	return 0;
}
