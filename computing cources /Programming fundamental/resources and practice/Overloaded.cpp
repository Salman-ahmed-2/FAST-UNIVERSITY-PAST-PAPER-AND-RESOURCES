#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << "int add(int, int)" << endl;
    return a + b;
}

double add(double a, double b) {
    cout << "double add(double, double)" << endl;
    return a + b;
}

// double add(int a, int b) {
//     cout << "double add(int, int)" << endl;
//     return a + b;
// }

int add(int a, int b, int c) {
    cout << "int add(int, int, int)" << endl;
    return a + b + c;
}

void add(int a, int b, int c, int d) {
    cout << "void add(int, int, int, int)" << endl;
    cout << a + b + c + d << endl;
}

// void add(int a, int b) {
//     cout << "void add(int, int, int, int)" << endl;
//     cout << a + b << endl;
// }


int main() {
    cout << add(10, 20) << endl;
    cout << add(10.5, 20.5) << endl;
    cout << add(10, 20, 30) << endl;
    add(10, 20, 30, 40);
    
}