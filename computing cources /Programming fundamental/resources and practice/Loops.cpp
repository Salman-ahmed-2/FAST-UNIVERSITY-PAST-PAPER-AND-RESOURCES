#include<iostream>
using namespace std;

int main(){

//*************************************************************
//  for loop examples
//*************************************************************

/*
//for loop
for (int i=0;i<5;i=i+1)
	cout<<"\nHello PF: "<<i;
*/

/*
int i=0;
//no init statement
for (;i<5;i=i+1)
	cout<<"\nHello PF: "<<i;  
*/


int i=0;
//no init and update statement, 
for (;15>8;)
	cout<<"\nHello PF: ";


/*
int i=0;
//infinite loop
for (;;)
	cout<<"\nHello PF: "<<i++; 
*/


/*
int i, j;
//multiple conditions...
for(i = 1, j = 2;(i<=3)||(j<=12);i++,j=j+2){
if(i>=3) 
i=3;
cout<<"\n i:"<<i<<", j:"<<j;}
*/

/*
//Ugly loop :)
int i = 10;
for(cout<<"starting...\n";i;cout<<i<<endl)
--i;
*/

//*************************************************************
//  while and do loop examples
//*************************************************************

/*	
while(sizeof(0))
{
  cout<<"\nInfinite loop";
}
*/

/*
 int i = 5, j = 0;
 while(i - j)
 cout<<"\n HaiLoop";
*/



//*************************************************************
//  Nested loops examples
//*************************************************************
/*
for (int i=0; i<2; i++) {	
	for (int j=0; j<2;j++)
	{
  		cout<<"\nHello-"<<i<<":"<<j;
	}
}
*/
/*
  int weeks=3, days_in_week=7;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j << endl;
        }
    }
*/

//**************************************************************
cout<<endl; 
return 0;

}

