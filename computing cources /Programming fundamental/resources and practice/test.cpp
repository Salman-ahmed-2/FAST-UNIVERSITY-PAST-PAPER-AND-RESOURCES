#include <iostream>
using namespace std;

// return type   FunctionName (parameters) 1 2 ... n
void check(int n){
    if (n<0){
        cout<<"Negative";
        return;
    }
}

int main(){


    int n;
    cin>>n;
    check(n);
    int b,v,c,x,w;
    cin>>b;
    if (b<0){
        cout<<"Negative";
        return 0;
    }
    cin>>v;
    if (v<0){
        cout<<"Negative";
        return 0;
    }
///---------------------------
    int b,v,c,x,w;
    cin>>b;
    check(b);
    cin>>v;
    check(v);
}