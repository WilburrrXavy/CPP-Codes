/*Create a program that will accept input of product name, price and quantity. 
Compute for the amount total then input amount paid. 
Compute as well the change. 
Display amount total and change.*/
#include<iostream>
using namespace std;
int main()
{
	int price,quantity,amountTotal,amountPaid,change;
	string productName; 
	
	cout << "Input product name: ";
	cin >> productName;
	cout << "Input price: ";
	cin >> price;
	cout << "Input quantity: ";
	cin >> quantity;
	amountTotal=price*quantity;
	cout << "Input amount paid: ";
	cin >> amountPaid;
	change=amountPaid-amountTotal;
	cout << "Total Amount is: "<<amountTotal<<endl;
	cout << "Change is: "<<change<<endl;
	return 0;
}
