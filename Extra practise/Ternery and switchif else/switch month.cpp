#include<iostream>
using namespace std;

main(){
	int Month;
	cout<<"Enter any number of Month:";
	cin>>Month;
	
	switch(Month){
		case 1:
			cout<<"It's January..!";
			break;
		case 2:
			cout<<"It's February..!";
			break;
		case 3:
			cout<<"It's March..!";
			break;
		case 4:
			cout<<"It's April..!";
			break;
		case 5:
			cout<<"It's May..!";
			break;
		case 6:
			cout<<"It's June..!";
			break;
		case 7:
			cout<<"It's July..!";
		break;
		case 8:
			cout<<"It's Auguest..!";
		break;
		case 9:
			cout<<"It's September..!";
		break;
		case 10:
			cout<<"It's Octomber..!";
		break;
		case 11:
			cout<<"It's November..!";
		break;
		case 12:
			cout<<"It's December..!";
		break;
		default:
			cout<<"Invalide Number..!";
		
	}
	
}
