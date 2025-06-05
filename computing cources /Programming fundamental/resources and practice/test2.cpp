#include <iostream>
using namespace std;

int sum(int& x, int& y) {
    // a 0x110, b 0x220
    // a= 5, b = 9
    x = 10;
    // a=10, b=9
    cout<<"x = "<<&x<<", y = "<<&y<<endl;

    return x + y;
}

// int sum(int* x,int &y){
//     cout<<&x<<endl;
//     cout<<x<<endl;
//     cout<<*x<<endl;
//     return *x +y;
// }


int main(){
    int a=5; // 0x100
    int b=9;// 0x200
    cout<<"a = "<<&a<<", b = "<<&b<<endl;
    cout<<sum(a,b)<<endl;
    // cout<<"Outside Function"<<endl;
    cout<<"a = "<<&a<<", b = "<<&b<<endl;

    cout<<a<<" "<<b<<endl;
}