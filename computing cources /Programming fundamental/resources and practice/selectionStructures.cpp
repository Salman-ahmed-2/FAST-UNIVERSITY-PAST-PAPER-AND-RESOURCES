#include<iostream>
using namespace std;


int main()
{


   //**********************************************************************
   // Example of Nested switch 
   //**********************************************************************
   
    int x = 1, y = 2;
    // Outer Switch
    switch (x) {
    	// If x == 1
    	case 1:		
		// Nested Switch
		switch (y) {
			// If y == 2
			case 2:
            			cout << "Choice is x=1 and y=2\n";
            			break;
  
        		// If y == 3
        		case 3:
            			cout << "Choice is x=1 and y=3\n";
            			break;
        	}//end of nested switch
        	break;
  
    	// If x == 4
    	case 4:
        	cout << "Choice is x=4\n";
        	break;
  
    	// If x == 5
    	case 5:
        	cout << "Choice is x=5\n";
        	break;
  
    	default:
       		cout << "Choice of x is other than 1, 2 3, 4, or 5";
        	break;
    }//end of outer switch

   //**********************************************************************
   // Example of Nested Ternary operator
   //**********************************************************************
    /*
    cout << "Execute expression using "
    << "ternary operator: ";
     
    //Nesting ternary in the second part of the operator....
    int a = (2 > 3) ? 2 : (3 > 4) ? 3 : 4; 
    cout << a << endl;

    //Nesting ternary in the first part of the operator....
    a = (4 > 3) ? (6 > 7)? 6 : 9 : 5;
    cout << a << endl;
      

    cout << "Execute expression using "
    << "if else statement: ";
    if ( 2 > 3 )
        cout << "2";
    else if ( 3 > 4 )
        cout << "3";
    else 
        cout << "4";
    cout<<endl;
   */
   //**********************************************************************
   // Example ...
   //**********************************************************************


    return 0;
}
