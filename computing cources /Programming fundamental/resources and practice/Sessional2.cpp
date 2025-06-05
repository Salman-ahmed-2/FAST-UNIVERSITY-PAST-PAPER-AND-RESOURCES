#include <iostream>
using namespace std;

//function prototypes
int fun(int, int);
void function(int y[][3]);
void calc(float&, int&, int&);
int WHAT(int A[], int);
bool Its_Magic(int arr[][4], int, int);
int func1( int &a);
void func2( int &a);
void func3( int &a);

//global variables
int q = 11;
int a = 5 ;

int main(){
    cout << "Sessional 2 Buddy Progarm" <<endl;
/*
    /////////////////////////////////////////////////
    cout << "Output 1" <<endl;

    int a = 8, b = 4, c = 1, d = 6;
    cout << a + b % c + c * d + 20 << endl;
    cout << a % d + 5 << endl;


    /////////////////////////////////////////////////
    cout << "Output 2" <<endl;

    cout << fun(5, 25) << endl;
    cout << fun(172,140)<<endl;

    /////////////////////////////////////////////////
    cout << "Output 3" <<endl;

    int x = 10, y = 0xFF;
    y = x++ - x++;
    cout << ++y;


    /////////////////////////////////////////////////
    cout << "Output 4" <<endl;

    int z = 981;
    if(z % 4 == 0 && z % 100 != 0 || z % 400 == 0)
        cout<<"Buddies" <<endl;
    else 
        cout<<"Nothing" << endl;

    /////////////////////////////////////////////////
    cout << "Output 5" <<endl;

    int q=20;
    cout<<::q++ <<endl;
    cout<<q+::q <<endl;

    /////////////////////////////////////////////////
    cout << "Output 6" <<endl;

    int arr[3][3] = { { 1,2,3} , { 4,5,6} , {7,8,9} };
    function(arr);
    cout << arr[1][0] << endl;

    /////////////////////////////////////////////////
    cout << "Output 7" <<endl;
    
    int i, j;
    int counter = 0;
    int arry[8][9];
    for (i = 0; i < 9; i++)
    for (j = 0; j < 8; j++)
    {
        arry[j][i] = counter;
        ++counter;
    }
    cout << arry[7][8] << endl;

    /////////////////////////////////////////////////
    cout << "Output 8" <<endl;

    int testarray[3][2][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
11, 12};

    cout << "Value at testarray[2][1][0] is " << testarray[2][1][0] << endl;

    /////////////////////////////////////////////////
    cout << "Output 9" <<endl;

    int ar[] = { 1, 10, 3, 7, 5, 6, 9, 2, 8 };
    const int N = sizeof(arr) / sizeof(arr[0]);
    int k;
    int temp[N + 1];
    for (int k = 0; k <= N; k++) {
        temp[k] = 0;
    }
    for (k = 0; k < N; k++) {
        temp[ar[k] - 1] = 1;
    }
    int ans;
    for (k = 0; k <= N; k++) {
        if (temp[k] == 0)
            ans = k + 1;
    }
    ans &= ans;
    cout << ans << endl;

    /////////////////////////////////////////////////
    cout << "Output 10" <<endl;

    int val1 = 2, val2 = 3;
    float res;
    calc(res, val1, val2);
    cout << val1 << " " << val2 << endl;
    cout << "Result is : " << res << endl;

    /////////////////////////////////////////////////
    cout << "Output 11" <<endl;

    int A[] = { 1, 2, 3, 4, -5, 1, 3, 2, 1 };
    cout << WHAT(A, 7);

    /////////////////////////////////////////////////
    cout << "Output 12" <<endl;

    int arrr[4][4] = { 3, 2, 3, 8, 2, 3, 7, 9, 3, 7, 3, 2, 8, 9, 2, 3 };
    if (Its_Magic(arrr, 4, 4))
        cout << "Abracadabra" << endl;


    

    /////////////////////////////////////////////////
    cout << "Output 13" <<endl;

    int a = 1;
    func1(a);
    cout<<a;
    

    /////////////////////////////////////////////////
    cout << "Output 14" <<endl;

    int x = -10;
    for( ; x>=-11; )
    {
        cout<<x<<endl;
        ++x;
    }
    cout<<"Bye"<<endl;

    /////////////////////////////////////////////////
    cout << "Output 15" <<endl;

    int x = 5, y = 30, m = 37;
    char ch = 'A', ch2 = 'Z';
    while(m /= 2)
    {
        if( y / x > 2)
            if(y % x != 2)
            {
                x+=2;
                cout<< x <<endl;
            }
        else{
            ch2 = ch & ch;
            cout<< ch++ << "\t"<< ch2<<endl;
        }
    }

    /////////////////////////////////////////////////
    cout << "Output 16" <<endl;

    int n = 9, div = 0;
    div = n/ div;
    while()
    {
        cout<< "hello" << div;

    }

    return "0";
    
    /////////////////////////////////////////////////
    cout << "Output 17" <<endl;

    int arr[5] = {1 , 5, 9 , 11, 15};
    for( int i = 0; i < 5; i++)
    {
        cout<< arr[i]/ 4* arr[i] / 2 << "\t";
    }
    
    /////////////////////////////////////////////////
    cout << "Output 18" <<endl;

    int i = 0, j= 1;
    while( i< 5)
    {
        while( j< 5)
        {
            cout << "* ";
            j++;
        }
        cout<< endl;
        i++;
        j = i;
    }
    
    /////////////////////////////////////////////////
    cout << "Output 19" <<endl;

    int list [10] = {21, 12, 13, 3, 55, 16};
    for(int i = 0; i< 5;i++)
    {
        int temp = list[i];
        list [i] = list [9 - i];
        list [ 9- i] = temp;
    }

    for( int i = 0;i< 10;i++)
        cout<<list[i]<<"\t";
        return 0;
        
        
    /////////////////////////////////////////////////
    cout << "Output 20" <<endl;

    int i = 50, j = 1, x = 0;
    do{
        i = ++j;
        x++;
    }while(x < 5);
    cout<< i<< " ";
    
    /////////////////////////////////////////////////
    cout << "Output 21" <<endl;

    int something = 1, n =3;
    for( int i = n; i >= 0; i--){
        something = something * i;
        if(i == 2)
            continue;
        if( i< 3)
            break;
    }

    cout<< something << endl;
    
    /////////////////////////////////////////////////
    cout << "Output 22" <<endl;

    int i = 0, j = 1, c = 0;
    while( j-++i)
    {
        c++;
    }
    cout<< c << endl;

    */    

    return 0;
}

void func3( int &a){
    a++;
    cout<< a;
}

void func2 ( int &a){
    func3(++a);
    cout<< a;
}

int func1(int &a)
{
    func2(++a);
    cout<<a;
}

bool Its_Magic(int arr[][4], int rows, int cols) {
    if (rows != cols)
        return false;
    for (int i = 0, s = i; i < rows; ++i, s++) {
        if (cout << arr[arr[i][i]][arr[0][0]] << "\n" && arr[0][0] != arr[i][i])
            return false;
        for (int j=i+1; j<cols; ++j, cout<<arr[j-1][i])
        {
            if (arr[i][j] != arr[j][i] && cout<<s--)
            return false;
        }
    }
    return true;
}

int WHAT(int A[], int N) {
    int ANS = 0;
    int S = 0;
    int E = N - 1;
    for (S = 0, E = N - 1; S < E; S++, E--)
        ANS += A[S] - A[E];
    return ANS;
}

void calc(float& res, int& para1, int& para2)
{
    para1 = 4 + para2 * 2;
    para2 += 3 * para1;
    res = para1 + para2 / 2.0;
}

// What is the purpose of this function
int fun(int m, int n)
{
    while (n != m)
    {
        if (n > m)
            n = n - m;
        else if (m > n)
            m = m - n;
    }
    return n;
}

void function(int b[][3]){
    ++b;
    b[1][1] = 9;
}