#include<iostream>
#include<climits> 
#include<cfloat>   
#include<string>
#include<cmath>
using namespace std;

int main()
{

  //**************************************************************
  //     Standard Constants
  //**************************************************************
  /*
  cout<<"\n Min int value:"<<INT_MIN;
  cout<<"\n Max int value:"<<INT_MAX;
  cout<<"\n---------------------------------------";

  cout<<"\n Min Long value:"<<LONG_MIN;
  cout<<"\n Max Long value:"<<LONG_MAX;
  cout<<"\n---------------------------------------";

  cout<<"\n Min Float value:"<<FLT_MIN;
  cout<<"\n Max Float value:"<<FLT_MAX;
  cout<<"\n---------------------------------------";

  cout<<"\n Min Double value:"<<DBL_MIN;
  cout<<"\n Max Double value:"<<DBL_MAX;
  cout<<endl;
 */
  //**************************************************************
  //     Char Types
  //**************************************************************
  /*
  unsigned char id =128;
  char alpha1 = 65; 
  char alpha2 = 'B';
  cout<<"\n id:"<<id;
  cout<<"\n alpha1:"<<alpha1;
  cout<<"\n alpha2:"<<alpha2;
  cout<<"\n alpha1 + alpha2:"<<alpha1+alpha2;
  alpha2 = alpha2+2;
  cout<<"\n alpha2:"<<alpha2;
  alpha2 = 97;
  cout<<"\n alpha2:"<<alpha2;
  alpha2 = 10; //new lines or \n
  cout<<"\n alpha2:"<<alpha2;
  cout<<"\n Bye\n";
  */
  //**************************************************************
  //     Char Types - Escape Sequences
  //**************************************************************

  //**************************************************************
  //     Data-Types and Memory Bytes
  //**************************************************************
  /*
  bool b;
  cout<<"\n bool size:"<<sizeof(b);  
  cout<<"\n char size:"<<sizeof(char);  
  cout<<"\n int size:"<<sizeof(int);
  cout<<"\n short int size:"<<sizeof(short int);
  cout<<"\n long int size:"<<sizeof(long int);
  cout<<"\n float size:"<<sizeof(float);
  cout<<"\n double size:"<<sizeof(double);
  cout<<"\n long double size:"<<sizeof(long double);
  cout<<"\n string size:"<<sizeof(string);
  string str="";
  cout<<"\n string var size:"<<sizeof(str);
  cout<<"\n string var data-size:"<<str.size();
  cout<<"\n Bye\n";
  */


  //**************************************************************
  //     Increment and Decrement Operators etc 
  //**************************************************************

   /*  
   int x = 5, y = 5, z;
   x = ++x; y = --y;
   z = x++ + y--;
   cout << z<<endl;
   */

   /*
    int num1 = 5;
    int num2 = 3;
    int num3 = 2;
    num1 = num2++;
    num2 = --num3;
    cout << num1 << num2 << num3<<endl;
    */

     /*
    int x=5, y=5;
    cout<<"\n Value of x after 3 pre-increment operations: "<<++x<<" "<<++x<<" "<<++x;
    cout<<"\n Value of y after 3 pre-inrement operations: "<<y++<<" "<<y++<<" "<<y++;
    cout<<endl;
     */

  //**************************************************************
  //     Type casting etc 
  //**************************************************************
  
   //pow function
   //cout<<pow(2,8)<<endl;

   /*
   unsigned int a = 10;
   int b = -6;
   float c = 3.2;
   char d = 'A';
   
   cout<<"\n Expression result: "<<a*b<<" and its type is unsigned int: "<<sizeof(a*b)<<endl;
   cout<<"\n Expression result: "<<c+d<<" and its type is float: "<<sizeof(c+d)<<endl;
   */

  //**************************************************************
  //     Overflow and Underflow
  //**************************************************************

/*
  // testVar is initialized with the maximum value for a short.
  short int testVar = 32767;

  // Display testVar.
  cout <<"\nOrignal value: "<<testVar <<endl;

  // Add 1 to testVar to make it overflow.
  testVar = testVar + 1;
  cout <<"\nValue Overflow +1: "<<testVar << endl;

  // Subtract 1 from testVar to make it underflow.
  testVar = testVar - 1;
  cout <<"\nValue underflow -1: "<<testVar << endl;
*/



  //**************************************************************
  //     Operator Precedence
  //**************************************************************
  /*
  int d=2;
   
  cout<<++d*2;  // produces 6
  cout<<d++*2;  // produces 4

  int x = 5 - 17 * 6; // * has higher precedence that -
  cout <<x;
  */

  /*
  int a = 1;
  int b = 4;
  // a -= 6 is evaluated first
  b += a -= 6;

  cout << "a = " << a << endl; ;
  cout << "b = " << b;
  */



 return 0;
}
