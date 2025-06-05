#include <iostream>
//#include"myMathLib.h"
#include"myMathLib2.h"
using namespace std;
int main()
{
    int value;
    cout<<"\nWelcome to my math library!"<<endl<<endl;

    cout<<"Enter a positive integer: ";
    cin>>value;

    
    cout<<"The factorial of "<<value<<" is: ";
    cout<<factorial(value)<<endl;
    

    cout<<"The cube of "<<value<<" is: ";
    cout<<getCube(value)<<endl;


    return 0;
}   

