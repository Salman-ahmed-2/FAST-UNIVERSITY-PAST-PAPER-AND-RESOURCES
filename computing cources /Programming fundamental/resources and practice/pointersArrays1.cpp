#include<iostream>
using namespace std;

int main()
{
   int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int *p;
   p=A[2];
   cout<<"\nvalue of p= "<<*p<<endl;
   return 0;
}
