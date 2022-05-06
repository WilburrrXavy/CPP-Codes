#include<iostream>
using namespace std;

int main(){
	int num1, num2, ans; 
	char ope;
	
	cout << "Choose operator(+,-,*,/,%): ";
	cin >> ope;
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	
	switch (ope){
		case '+':
			ans=num1+num2;
			cout << num1 << " " << ope << " " << num2 << " = " << ans;
			break;
		
		case '-':
			ans=num1-num2;
			cout << num1 << " " << ope << " " << num2 << " = " << ans;
			break;
			
		case '*':
			ans=num1*num2;
			cout << num1 << " " << ope << " " << num2 << " = " << ans;
			break;
			
		case '/':
			ans=num1/num2;
			cout << num1 << " " << ope << " " << num2 << " = " << ans;
			break;
			
		case '%':
			ans=num1%num2;
			cout << num1 << " " << ope << " " << num2 << " = " << ans;
			break;
			
		default: 
		cout << "Invalid operator! ";
		break;	
	}
}
