#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
};
main(){
	Node *HEAD = NULL;
	HEAD = new Node;
	
	HEAD->data = 25;
	HEAD->next = NULL;
	
	Node *n2 = new Node;
	n2->data = 98;
	n2->next = NULL;
	HEAD->next = n2;
	
	Node *n3 = new Node;
	n3->data = 89;
	n3->next = NULL;
	HEAD->next = n3;
	
	Node *n4 = new Node;
	n4->data = 89;
	n4->next = NULL;
	HEAD->next = n4;
	
	cout<<"First Node: "<<HEAD->data<<" Address:  "<<HEAD->next<<endl;
	cout<<"Second Node: "<<n2->data<<" Address:  "<<n2->next<<endl;
	cout<<"Second Node: "<<n3->data<<" Address:  "<<n3->next<<endl;
}
