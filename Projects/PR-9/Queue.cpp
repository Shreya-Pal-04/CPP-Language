#include<iostream>
using namespace std;

class Queue{
	private:
		int *arr;
		int front,rear,size,capacity;
	public:
		Queue(int cap){
			capacity = cap;
			arr = new int[capacity];
			front = 0;
			rear = -1;
			size = 0;
		}
		void enqueue(int value){
			if(size == capacity){
				cout<<"Queue is Full (Overflow)!!"<<endl;
				return;
			}
			rear ++;
			arr[rear] = value;
			size ++;
			cout<<"--- Element successfully added ---"<<endl;
		}
		void dequeue(){
			if(size == 0){
				cout<<"Queue is Empty (Underflow)."<<endl;
				return;
			}
			cout<<"--- "<<arr[front]<<" Remove from Array ---"<<endl;
			front++;
			size--;
		}
		void peek(){
			if(size == 0){
				cout<<"Queue is Empty (Underflow)."<<endl;
				return;
			}
			cout<<"Front Elememt is "<<arr[front]<<endl;
		}
		void display(){
			if(size == 0){
				cout<<"Queue is Empty (Underflow)."<<endl;
				return;
			}
			cout<<"*** Queue Element ***"<<endl;
			for(int i=front; i<=rear; i++){
				cout<<arr[i]<<" ";
			} cout<<endl;
		}
		int qsize(){
			return size;
		}
		~ Queue(){
			delete[] arr;
		}
};
int main(){
	int choice,value,cap; 
	
	cout<<"Enter Capacity: ";
	cin>>cap;
	
	Queue q(cap);
	
	do{
		cout<<endl<<"=== MENU ==="<<endl;
		cout<<"1. Enqueue (Add)"<<endl;
		cout<<"2. Dequeue (Remove)"<<endl;
		cout<<"3. Peek (Front)"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. Size"<<endl;
		cout<<"6. Exit"<<endl;
		
		cout<<"Enter your Choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Enter value: ";
				cin>>value;
				
				q.enqueue(value);
			break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.peek();
				break;
			case 4:
				q.display();
				break;
			case 5:
				cout<<" The Queue size: "<<q.qsize()<<endl;
				break;	
			case 6:
			cout<<"~~~~ Thank you ~~~~"<<endl;
				break;	
		default:
			cout<<"--- Invalid Choice ---"<<endl;
		}
	}while(choice != 6);
	return 0;
}
