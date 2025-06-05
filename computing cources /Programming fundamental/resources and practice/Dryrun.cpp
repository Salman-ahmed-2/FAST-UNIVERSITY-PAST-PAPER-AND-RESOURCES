#include<iostream>
using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int &a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


// int main(){

//     int a = 10, b = 20;
//     cout << "Before swap: " << a << " " << b << endl;
//     swap(a, b);
//     cout << "After swap: " << a << " " << b << endl;

//     cout << "Before swap: " << a << " " << b << endl;
//     swap(&a, &b);
//     cout << "After swap: " << a << " " << b << endl;

//     return 0;

// }


/////=============================================================================================


// int sum(int a[],int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += a[i];
//     }
//     return sum;
// }

// int Sum_with_pointer(int *a, int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += *(a + i);
//     }
//     return sum;
// }

// int main(){
//     int a[] = {1,2,3,4,5};
//     int size = 5;
//     cout << "Sum: " << sum(a, size) << endl;
//     cout << "Sum with pointer: " << Sum_with_pointer(a, size) << endl;
//     return 0;
// }

/////=============================================================================================


// void Sum_and_Average(int a[], int size, int &sum, double &avg){
//     sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += a[i];
//     }
//     avg = (double)sum / size;

//     a[0] = -1;
// }

// void cont_Sum_and_Average(const int a[], int size, int &sum, double &avg){
//     sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += a[i];
//     }
//     avg = (double)sum / size;

//     a[0] = 20;
// }

// int main(){
//     int a[] = {1,2,3,4,5};
//     int size = 5;
//     int sum;
//     double avg;
//     Sum_and_Average(a, size, sum, avg);
//     cout << "Sum: " << sum << endl;
//     cout << "Average: " << avg << endl;
//     cout << "a[0]: " << a[0] << endl;

//     // cout<<"=========================="<<endl;
//     // cont_Sum_and_Average(a, size, sum, avg);
//     // cout << "Sum: " << sum << endl;
//     // cout << "Average: " << avg << endl;
//     // cout << "a[0]: " << a[0] << endl;
//     return 0;
// }