#include <iostream>
#include <vector>
using namespace std;
void printFibonacci(int n)
{
    int * fib=new int[n];

    if (n >= 1)
        fib[0] = 0; // First Fibonacci number
    if (n >= 2)
        fib[1] = 1; // Second Fibonacci number

    for (int i = 2; i < n; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // Compute the next Fibonacci number
    }

    cout << "Fibonacci Series:\n";
    for (int i=0; i<n; ++i)
    {
        cout << fib[i] << " ";
    }
    cout << endl;
}

float area(float r,int s,float pie=3.142){
    return pie*r*r;
}

int main()
{
    cout<<area(3.0,6)<<endl;
    // int n = 25; // Number of Fibonacci numbers to generate
    // printFibonacci(n);
    // return 0;
}
