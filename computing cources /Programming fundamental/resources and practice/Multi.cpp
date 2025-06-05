#include <iostream>
// #include <cmath>
using namespace std;

void V1(int a){
    cout << "Outside V1(int)" << endl;
}

void V1(double a){
    cout << "Outside V1(double)" << endl;
}

int add(int a, int b) {
    cout << "int add(int, int)" << endl;
    return a + b;
}

void print(int a) {
    cout << "Inside print(int)" << endl;
    V1(a);
    add(1,2);
       
}


int main() {
   print(10);
}