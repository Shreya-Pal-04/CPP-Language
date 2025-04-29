#include <iostream>
using namespace std;

int main() {
    int mark;
    char grade;

    cout << "Enter your mark: ";
    cin >> mark;
    
    grade = (mark >= 90) ? 'A' :
    		(mark >= 80) ? 'B' :
    	 	(mark >= 70) ? 'C' :
    	 	(mark >= 60) ? 'D' :	
    	  	(mark >= 50) ? 'E' : 'F';	
    
	cout<< "Your grade is "<<grade<<endl<<endl;
	
	switch(grade){
		case 'A':
			cout<<"Excellent work.";
		break;
		case 'B':
			cout<<"Well done.";
		break;
		case 'C':
			cout<<"Good job";
		break;
		case 'D':
			cout<<"You passed, but you could do better.";
		break;
		case 'E':
			cout<<"You passed, but you could do better.";
		break;
		case 'F':
			cout<<"Sorry, you failed.";
		break;
		default:
			cout<<"Invalid grade.";
	}
	cout<<endl;
	
	if (grade >= 'A' && grade <= 'D'){
		cout<<"Congratulations! You are eligibal for the next level.";
	}else{
		cout<<"Please try again next time.";
	}
	
}
