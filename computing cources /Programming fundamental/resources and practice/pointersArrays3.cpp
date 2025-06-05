#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main()
{
   int M=4; int N=6;
   int** A=new int*[M]; srand(time(0));

   for(int i=0;i<M;i++) /*Allocate subarrays */
       A[i]=new int[N];

   //set values
   for(int i=0;i<M;i++)
   {
	for(int j=0;j<N;j++) 
    {
		A[i][j] = rand()%100;
        *(*(A + i) + j) = rand() % 100;
    }
   }

   // display values
   for (int i = 0; i < M; i++)
   {
       for(int j=0;j<N;j++) {
           cout<<A[i][j]<<"   ";  
       }
     cout<<endl;
   }

    //deallocate memory
    for(int i=0;i<M;i++)
       delete[] A[i];
    delete[] A;

   return 0;
}
