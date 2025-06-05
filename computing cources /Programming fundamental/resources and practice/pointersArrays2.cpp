#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main()
{
   int M=4; int N=5;
   int* Arr=new int[M*N];
   srand(time(0));


   //set values
   for(int i=0;i<M;i++)
	for(int j=0;j<N;j++) 
		*(Arr + i*M+j) = rand()%100;
                
   //display values
   for(int i=0;i<M;i++) {
       for(int j=0;j<N;j++) {
           cout<<*(Arr + i*M+j)<<"   ";  
           //cout<<(Arr+i*M)[j]<<"   ";
       }
     cout<<endl;
    }
    delete Arr;
   return 0;
}
