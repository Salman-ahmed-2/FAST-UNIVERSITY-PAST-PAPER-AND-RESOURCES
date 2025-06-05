//#include<iostream>
//using namespace std;
//
//int main()
//{
//	///////////////////// For Loop ////////////////////
//
//	//Syntax
//
//	 //for (initialization; condition; updation) {
//		// *** code to be executed ***
//	 //}
//
//	//Example 
//	
//	/*for (int i = 0; i < 5; i++) {
//		std::cout << "Value of i: " << i << std::endl;
//	}*/
//
//
//	///////////////////// While Loop ////////////////////
//
//	//Syntax
//
//	//while (condition) {
//	//	// code to be executed
//	//}
//
//
//	//Example 
//
//	/*int x = 0;
//	while (x < 5) {
//		std::cout << "Value of x: " << x << std::endl;
//		x++;
//	}*/
//
//
//
//	///////////////////// Do-While Loop ////////////////////
//
//	//Syntax
//
//	//do {
//	//	// code to be executed
//	//} while (condition);
//
//
//
//	//Example 
//
//	/*int num;
//	do {
//		cout << "Enter a number (enter 0 to stop): ";
//		cin >> num;
//	} while (num != 0);
//*/
//
//
/////////////////////// Infinite For Loop Examples ////////////////////
//
//	//Example
//
//	//for (;;) { // Infinite because no condition is provided
//	//	std::cout << "I am infinite! I will live forever. :D" << std::endl;
//	//}
//
//	//Example
//
//	//for (int i = 0; i >= 0; i++) { // Condition `i >= 0` is always true for positive `i`
//	//	std::cout << "i = " << i << " (Infinite loop)" << std::endl;
//	//}
//
//	//Example
//
//	//for (int i = 0; i < 10; ) { // `i` is never updated, so the condition remains true
//	//	std::cout << "This is an infinite for loop!" << std::endl;
//	//}
//
//
//	///////////////////// Infinite While Loop Examples ////////////////////
//
//	//Example
//
//	//while (true) { // Infinite because condition is always true
//	//	std::cout << "This is an infinite while loop!" << std::endl;
//	//}
//
//
//	//Example
//
//	//int x = 5;
//	//while (x > 0) { // `x` is never updated, so the condition stays true
//	//	std::cout << "This is an infinite while loop!" << std::endl;
//	//}
//
//
//	//Example
//
//	//while (true) { // Infinite but can be broken by user input
//	//	int num;
//	//	std::cout << "Enter a number (0 to stop): ";
//	//	std::cin >> num;
//	//	if (num == 0) {
//	//		break; // Exit loop
//	//	}
//	//}
//	
//
//	// while (true) { // Infinite but can be broken by user input
//	//	int num;
//	//	std::cout << "Enter a number (0 to stop): ";
//	//	std::cin >> num;
//	//	if (num == 0) {
//	//		break; // Exit loop
//	//	}
//	//}
//
/////////////////////// Infinite Do-While Loop Examples ////////////////////
//
//	//Example
//
//	//do {
//	//	std::cout << "This is an infinite do-while loop!" << std::endl;
//	//} while (true);
//
//	
//	//Example
//
//	//int x = 1;
//	//do {
//	//	std::cout << "This is an infinite do-while loop!" << std::endl;
//	//	// `x` is never updated, so condition remains true
//	//} while (x == 1);
//
//
//	//Example
//
//	//	do {
//	//	int num;
//	//	std::cout << "Enter a number (0 to kill me pls): ";
//	//	std::cin >> num;
//	//	if (num == 0) {
//	//		break; // Exit loop
//	//	}
//	//} while (true);
//
//
//
//
///////////////////////Break and Continue ////////////////////
//
//	//Example
//
//	//for (int i = 1; i <= 10; i++) {
//	//	if (i == 5) {
//	//		cout << "Loop breaks at i = " << i << std::endl;
//	//		break; // Exit the loop when i equals 5
//	//	}
//	//		cout << "i = " << i << std::endl;
//	//}
//
//
//	//Example
//
//	/*int i = 0;
//	while (i < 10) {
//		
//			
//		cout << "Odd number: " << i << std::endl;
//			continue; 
//	}*/
//
//
//	//Example
//
//	//for (int i = 1; i <= 20; i++) {
//	//	if (i % 3 == 0) {
//	//		continue; // Skip numbers divisible by 3
//	//	}
//	//	if (i > 15) {
//	//		break; // Stop the loop when i > 15
//	//	}
//	//	cout << i << " ";
//	//}
//
//
//
//
//
//
//	return 0;
//}