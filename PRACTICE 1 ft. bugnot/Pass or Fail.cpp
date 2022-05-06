/*Create a program that will accept input of name, subject,midterm and final grade. 
Compute for the sem grade(sem=mid+fin/2). 
Determine and display the remarks of Passed or Failed.*/
#include<iostream>
using namespace std;
int main()
{
	string name,subject;
	int midtermGrade,finalGrade, semGrade;
	
	cout<<"Input name";
	cin>>name;
	cout<<"Input subject";
	cin>>subject;
	cout<<"Input midtermGrade";
	cin>>midtermGrade;
	cout<<"Input finalGrade";
	cin>>finalGrade;
	semGrade=midtermGrade+finalGrade/2;
	if(semGrade>=75)
	{
		cout << "Pass";
	}
	else if (semGrade<75)
	{
		cout << "Failed";
	}
	return 0;	
}
