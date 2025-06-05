#include<iostream>
using namespace std;

int main()
{
	
	int a=1;
	int b;

	a=1;
	b = ++a * ++a;
	cout<<"++a * ++a = "<<"a: "<<a<<", b: "<<b; cout<<endl;
	//cout<<"a: "<<a<<", b: "<<b; cout<<endl;

	a=1;
	b = a++ * a++;
	cout<<"a++ * a++ = "<<"a: "<<a<<", b: "<<b; cout<<endl;
	//cout<<"a: "<<a<<", b: "<<b; cout<<endl;

	a=1;
	b = ++a * a++;
	cout<<"++a * a++ = "<<"a: "<<a<<", b: "<<b; cout<<endl;
	//cout<<"a: "<<a<<", b: "<<b; cout<<endl;

	a=1;
	b = a++ * ++a;
	cout<<"a++ * ++a = "<<"a: "<<a<<", b: "<<b; cout<<endl;
	//cout<<"a: "<<a<<", b: "<<b; cout<<endl;

	a=1;
	b = a++ * ++a;
	cout<<"a++ * ++a = "<<"a: "<<a<<", b: "<<b; cout<<endl;
	//cout<<"a: "<<a<<", b: "<<b; cout<<endl;
	


	//===============================================================

	/*
	int a=1;
	int b;

	
	b = ++a + ++a + ++a;
	cout<<"  ++a + ++a + ++a =  "<<"a: "<<a<<", b: "<<b<<endl; a=1;

	b = a++ + a++ + a++;
	cout<<"  a++ + a++ + a++ =  "<<"a: "<<a<<", b: "<<b<<endl; a=1;

	b = ++a + a++ + a++;
	cout<<"  ++a + a++ + a++ =  "<<"a: "<<a<<", b: "<<b<<endl; a=1;

	b = a++ + ++a + ++a;
	cout<<"  a++ + ++a + ++a =  "<<"a: "<<a<<", b: "<<b<<endl; a=1;

         b = a++ + a++ + ++a;
	cout<<"  a++ + a++ + ++a =  "<<"a: "<<a<<", b: "<<b<<endl; a=1;
*/

return 0;
}

