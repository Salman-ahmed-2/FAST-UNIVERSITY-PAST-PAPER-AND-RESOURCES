//#include <iostream>
//using namespace std;
//
//   
//
//int mystery(int value)
//{
//    static int count = 3;
//    count++;
//    cout << "count = " << count << endl;
//    value += count;
//    return value;
//}
//
//int addToSum(int value) {
//    static int cumulativeSum = 0; // Static variable to retain its value across function calls
//    cumulativeSum += value;
//    return cumulativeSum;
//}
//
//int main() {
//    
//
//    int a = 5;
//   
//
//    // Question 6
//
//    /*int val;
//    for (int i = 0; i < 3; i++)
//    {
//        val = mystery(i);
//        cout << "val 1 = " << val << endl;
//    }*/
//
//
//
//    
//    // Question 1
//    
//   /* float x = 10;
//    while (x < 100) {
//        int x = 20;
//        x = x + 10;
//        cout << "x = " << x << endl;
//    }
//
//    cout << x << endl;*/
//
//    // Question 2
//
//    //int y = 50; // Outer y initialized to 50
//
//    //for (int i = 0; i < 3; i++) {
//    //    int y = 10; // Inner y declared and initialized to 10
//    //    y += i;     // Modifies the inner y
//    //    cout << "Inner y in iteration " << i << ": " << y << endl;
//    //}
//
//    //cout << "Outer y after loop: " << y << endl;
// 
//
//
//    // Question 3
//
//    //ascii of a = 97
//   // ascii of A = 65
//
//
//    /*char text[] = "hello world "; 
//    int i = 0;
//    while (text[i] != '\0')
//    {
//        if (text[i] == 'w' || text[i] == 'h' || text[i] == 'd')
//            text[i] = '#';
//        else if (text[i] >= 'a' && text[i] <= 'z')
//            text[i] -= 32;
//        else if (i % 2 == 0)
//            text[i] = text[i] - 1;
//        else
//            text[i] = '&';
//        i++;
//    }
//    cout << text << endl;*/
//
//
//
//    // Question 4
//
//  /*  int MAX = 70;
//    for (char ch = 65; ch <= MAX; ++ch) {
//        int i = 'A';
//        while (true)
//        {
//            if (i++ % 2 == 0)
//                continue;
//            if (i > ch)
//                break;
//            cout << ch << " ";
//        }
//
//        cout << endl;
//    }*/
//
//
//    // Question 5
//
//    /*int x, y = 4;
//    for (x = 2; x < y; x += 2)
//        y = y + 1 % x;
//    cout << y << endl;
//    x = y;
//    do {
//        cout << --x << endl;
//        x *= 4;
//    } while (x <= 10);*/
//
//   
//
//    
//    
//
// // Question 7
// 
//    //int n; // Number to be entered
//    //int calls = 3; // Number of times to call the function
//
//    //for (int i = 1; i <= calls; ++i) {
//    //    cout << "Call " << i << ": Enter a number: ";
//    //    cin >> n;
//    //    int result = addToSum(n); // Call the function
//    //    cout << "Cumulative sum = " << result << endl;
//    //}
//    //    
//
//
//
//    return 0;
//}
//
