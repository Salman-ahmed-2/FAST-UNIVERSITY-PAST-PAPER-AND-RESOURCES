
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int empID=-1;
	string empName="";
	int empSalary=-1;
	
	cout<<"\nEnter employee ID:";
	cin>>empID;
	cin.ignore(1000,'\n');

	cout<<"\nEnter employee Name:";
	cin>>empName; 
 	//getline(cin,empName,'$');
	//cin.ignore(1000,'\n');

	cout<<"\nEnter Employee Salary:";
	cin>>empSalary;
	//cin.ignore(1000,'\n');

	cout<<endl;
	cout<<"\n=========== Data Entered by the User ================";
	cout<<"\nEmployee ID:"<<empID;
	cout<<"\nEmployee Name:"<<empName;
	cout<<"\nEmployee Salary:"<<empSalary;
	cout<<endl;
	return 0;
}

