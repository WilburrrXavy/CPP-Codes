/*Create a program that will accept 3 numbers.
Compute and display their average*/
#include<iostream>
using namespace std;
int main() 
{
	int n1, n2, n3, sum;
	float ave;

	cout<<"Input 1st number";
	cin>>n1;
	cout<<"Input 2nd number";
	cin>>n2;
	cout<<"Input 3rd numer";
	cin>>n3;
	sum=n1+n2+n3;
	ave=sum/3;
	cout<<"Average is:"<<ave;
	return 0;

}
