#include <iostream>
using namespace std;


int main() {
    ////////////////////////1////////////
    // /*
    // int num = 0;
    // if(num +=0 )
    // cout << "Hello" << endl;
    // else
    // cout << "World" << endl;
    // if(num += 2)
    // cout << "Hello" << endl;
    // else
    // cout << "World" << endl;
    // return 0;

    /////////////////////2////////////////
    
    /*int n = 15; 
    for (; ;) 
    cout << n; 
    return 0; 
    */
    //////////////////3//////////////////
    /*
    for(int i = 0; i < 3; ++i) 
    for(int j = 0; j < 3; ++j) 
    cout << "Inner Loop"; 
    return 0; 
    */
    /////////////////4//////////////////
    /*
    int a =7;
    for(int i=0; --a ; i++)
    {

        cout<<i<<endl;
    }
    
    /////////////////5////////////////
    
    for(int i=0; (cout<<"Hello ")  && i<7 ; i++)
    {

        cout<<" World"<<endl;
    }
    
*/
    ///////////////6///////////////
    ///////////
    /*
    There is island in Japan which is named as Rabbit Island because there is inhabited by hundreds of wild rabbits. The island has become a popular destination for tourists. Rabbit Island was used as a site for producing chemical weapons during the Second World War.  It was subsequently abandoned due to health concerns, and no one is sure where the rabbits came from.  One theory is that the one pair of rabbits escaped from being tested at the chemical weapons establishment. 
Imagine you have a pair of rabbits, one male and one female in a field.  Suppose one pair of rabbits breed a new pair after every two month. The new pair will not breed after the first two months.
Start: 1 pair
After 2 month: 1 + 1
 Write a C++ program using while Loop that will print how many rabbit pairs we have after n months
*/
    /*
    int n = 9;
    int num2 = 0;
    int num1 = 1;
    int temp;
    for(int i = 0; i<= 9; i++){
        temp = num1;
        num1  += num2;
        num2 = temp;
    }

    cout<<num1<<endl;
    
*/ 
/*A real estate office handles, say, 50 apartment units. When the rent is, say, $600 per month,
all the units are occupied. However, for each, say, $40 increase in rent, one unit becomes vacant.
Moreover, each occupied unit requires an average of $27 per month for maintenance. How many units
should be rented to maximize the profit?
Write a program that prompts the user to enter:
1. The rent to occupy all the units.
2. The increase in rent that results in a vacant unit.
3. Amount to maintain a rented unit.
The program then outputs the number of units to be rented to maximize the profit.
*/
    /*
    double  rent, irent, maintenance, profit = 0, fp, n;
    int apartment, vaccanta = 0;

    cout << "Enter the amount of apartment units: ";
    cin >> apartment;
    cout << "Enter the Rent to Occupy all the Units: ";
    cin >> rent;
    cout << "Enter the Increase in rent: ";
    cin >> irent;
    cout << "Enter the Amount for Maintenance: ";
    cin >> maintenance;

    while ((apartment - vaccanta) > 0)
    {
        (fp = (apartment - vaccanta) * (rent - maintenance));

        if (fp > profit)
        {
            profit = fp;
            n = (apartment - vaccanta);
        }

        rent += irent;
        vaccanta++;

    }
    cout << "number of units to be rented to maximize the profit are: " << n << endl;
    cout << "Amount of charge for rent: " << (rent - irent * n) << endl;
    */
/////////////checkered printing code
    // int n =7;
    // for(int i = 0 ; i<n ;i++)
    // {
    //     if(i % 2 == 0)
    //     { 
    //         for(int j = 0; j< n ;j++)
    //         {

    //             if(j % 2 == 0)
    //             {
    //                 cout<<"*";
    //             }
    //             else
    //             {
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;

    //     }
    //     else{
    //         for(int j = 0; j< n ;j++)
    //         {

    //             if(j % 2 == 0)
    //             {
    //                 cout<<" ";
    //             }
    //             else
    //             {
    //                 cout<<"*";
    //             }
    //         }
    //         cout<<endl;
    //     }

    // }
}
