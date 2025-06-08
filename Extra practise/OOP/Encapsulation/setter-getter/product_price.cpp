#include<iostream>
using namespace std;

class Product{
	private:
		int price;
	public:
		void setPrice(int price){
			if(price >=0){
				this->price = price;
			}else{
				cout<<"not valide";
			}
		}
		int getPrice(){
			return price;
		}
};
int main(){
	Product p;
	p.setPrice(22000);
	cout<<"The Product Price is : "<<p.getPrice();
	return 0;
}
