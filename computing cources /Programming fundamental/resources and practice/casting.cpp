#include<iostream>
using namespace std;

int divide(int a, int b){
    cout<<"Int Divide"<<endl;
    return a/b;
}

float divmultiide(double a, double b){
    return a*b;
}
float divmultiide(double a, double b,double c){
    return a*b*c;
}
float divmultiide(double a, double b,double c,double d){
    return a*b*c*d;
}
float divmultiide(double a, double b,double c,double d,double e){
    return a*b*c*d*e;
}

// float divide(float a,float b,float c,int f,int g){
//     cout<<"Float Divide argument 3"<<endl;
//     return a/b +c;
// }

void pata();

int main(){
    int a = 10, b = 3;
    cout << "Interger Divide = " << divide(a,b) << endl;
    double x = 10, y = 3;
    cout << "Float Divide = " << divide(x,y) << endl;

    // cout<< divide(10.0f,3.0f,2,5,1) << endl;
    // pata();
    return 0;
}

void pata(){
    main();
}