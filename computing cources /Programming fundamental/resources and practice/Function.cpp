#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void patternprint(int n,char c) {
    for (int i = 0; i < n; i++) 
    {
        cout << c;
    }
}

int main() {

    // int saving = add(-432, 3);
    // cout<<saving<<endl;
    // add(1000, 500);

    // int a = 10;
    // int b = 20;
    // int sum = add(a, b);

    // cout << "Sum: " << sum << endl;

    // cout << "Sum: " << add(13, 25) << endl;

    // int arr[5] = {1, 2, 3, 4, 5};
    // int sum = 0;
    // for (int i = 0; i < 5; i++) {
    //     sum = add(sum, arr[i]);
    // }
    // cout << "Sum: " << sum << endl;

    // patternprint(7);
    int n;
    char m;
    cin>> n >> m;
    for (int i = 1; i <= n; i++) {
        patternprint(i,m);
        cout << endl;
    }
}