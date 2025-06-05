#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	/*
	
	int x = 55;
	cout << oct << x << endl; // Outputs 52 \n
	cout << hex << x << endl; // Outputs 2a \n
	cout << dec << x << endl; // Outputs 42 \n
	*/
/*
	int n=15;
	float y = 18.346;
	cout<<setw(n)<<y<<endl; //Total width equals 12 characters, 6 trailing spaces and 6 data char*/

	
	//float y=119.54;
	// width 12 chars, preision of 3 digit, setprecision application on float only
	//cout<<setw(2)<<setprecision(4)<<y<<endl; 
	
	


	
	// width 12 chars, preision of 4 digits, fill spaces with _
	//cout<<setw(12)<<setprecision(4)<<setfill('\t') <<y<<endl; 
	

	
	
	//Set base (16 for hex, 8 for oct, 10 for dec)
	//int z=32;
	//cout<<setbase(10)<<endl<<"converted base= "<<z<<endl;
	

	
       //cout << setw(15) <<"Hello" << "PF" << endl; 
       //cout << left << setw(15) <<setfill('_')<<"Hello" << "PF" << endl; //left justify
	
	/*
	//*********************************************************************
	// fixed point and scietific notation 
	//*********************************************************************
	float a = 4.0;
	int n=7;
	cout<<"\nDefault format value:"<<setprecision(n)<<a<<endl; 
	cout<<"\nFixed format value:"<<setprecision(n)<<fixed<<a<<endl; 
	cout<<"\nScientific format value:"<<setprecision(n)<<scientific<<a<<endl; 
	*/
  
	//*********************************************************************
	/* cin fail() and good() examples */
	//*********************************************************************
 	
	/*int number;
	cout<<"Enter a number: "<<endl;
        cin >> number;
        if(cin.fail())
            cout << "Not a number " << number<<endl;*/
	
	
	/*
	int number;
	cout<<"Enter a number: "<<endl;
        cin >> number;
        if(cin.good())
            cout<<"valid number "<<number<<endl;

	cin.clear(); //reset previously set flag
	if(cin.good())
            cout<<"valid number "<<number<<endl;
	
*/

	//*********************************************************************
	/* working with strings and characters */
	//*********************************************************************
		
	// Getting space characters (tab, newline, space) as input
	/*
        char ch;
	cin.get(ch);
        cout<<"\nYou entered:"<<ch;
	cout<<"Bye!\n";
*/
	
	
	//String input (space and tab keys);
	string strVar;
	/*cout<<"\nEnter your name: ";
	getline(cin,strVar);
	cout<<"\nYour name is: "<<strVar<<endl;
	*/
	
	/*
	//Enter paragraph and terminate with your desired charater
        cout<<"\nEnter Story: ";
	getline(cin,strVar,'$');
	cout<<"\nYour story is: "<<strVar<<endl;
	*/
	return 0;
}
