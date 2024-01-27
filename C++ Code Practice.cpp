//C++ Code Compilation

/* Hello. This  is a compilation of the basic C++ codes I would write under
 my first years as a learner in an Introduction to Programming class.
 
* Several blocks of codes are commented so that only a particular section is used
 at any given time.

 IMPORTANT:
 In order to understand the code segments compiled here, you are expected to
 have basic knowledge in the following areas of coding with C++:

 1. C++ Libraries
 2. C++ Variables
 3. C++ Data types
 4. Pseudocodes and Flowcharts
 
* Highlight the section of code you wish to execute by pressing Ctrl +Shift + ? and then run
 the debugger. Remember to comment it again after execution.
 
* This compilation belongs to: 
 
* Kisera Timon Omonde
* Strathmore University
 
* Disclaimer:
* There are general comments included in this compilation
* Be cautious when removing some comments to save you some time and effort handling errors
* This compilation is not final and will be subjected to updates and modifications in future
*/


//Libraries used in this compilation
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

//Namespaces used in this compilation
using namespace std;

//Code segments in this compilation

//CLASS 0: OUTPUTS IN C++
//int main()
//{
//	cout << "Hello world";
//}

//CLASS 1: DECLARING AND INITIALIZING VARIABLES
//int main()
//{
//    //declaring variables
//    int num1;
//    int num2;
//    int sum;
//    //initializing variables
//    num1 = 150;
//    num2 = 200;
//    sum = num1 + num2;
//    cout << "the sum is: " << sum;
//    return 0;
//    system("pause");
//}

//CLASS 2: INPUT IN C++
//int main()
//{
//	//defining variables
//	char firstname, lastname;;
//	const int currentyear = 2023;
//	int age;
//	int yearofbirth;
//
//	//output/input process
//	cout << "Your first name is:\n";
//	cin >> firstname;
//	cout << "Your last name is:\n";
//	cin >> lastname;
//	cout << "Your age is:\n";
//	cin >> age;
//
//	//initiating variables
//	yearofbirth = currentyear - age;
//
//	//final output
//	cout << "You are:\n" << firstname<<" " <<lastname << " "<<endl;
//	cout << "You were born in: " << yearofbirth;
//	return 0;
//	system("pause");
//}

//CLASS 3.0: CONDITIONAL LOOPS
//CLASS 3.1.0: IF STATEMENTS
//int main()
//{
//	int num;
//	cout << "Enter a number:\n";
//	cin>>num;
//	if (num < 4)
//	{
//		cout << "Registered number is less than 5\n";
//	}
//	return 0;
//}

//CLASS 3.1.1: IF ELSE STATEMENTS CONTINUATION
//int main()
//{
//	//declaring variables
//	int stockvalue = 55000000;
//
//	//IF...ELSE Statement
//	if (stockvalue > 55000000) {
//		cout << "well stocked\n";
//	}
//	else {
//		cout << "Need for restocking";
//	}
//	cin.get();
//	//cin.get() is an alternative for return 0;
//}

//CLASS 3.1.2: IF ELSE STATEMENTS CONTINUATION
//int main()
//{
//	//declaring variables
//	const int currentyear = 2023;
//	int yearofbirth, age;
//
//	//Taking user inputs
//	cout << "Enter your year of birth\n";
//	cin >> yearofbirth;
//	age = currentyear - yearofbirth;
//
//	if (age > 18) {
//		cout << "Adult";
//	}
//	else {
//		cout << "Underage";
//	}
//	cin.get();
//}

//CLASS 3.1.3
//int main()
//{
//	int Phy, Che, Bio, Math, Comp;
//	double average;
//	cout << "Enter the Physics marks\n";
//	cin >> Phy;
//	cout << "Enter the Chemistry marks:\n";
//	cin >> Che;
//	cout << "Enter the Biology marks\n";
//	cin >> Bio;
//	cout << "Enter the Mathematics marks\n";
//	cin >> Math;
//	cout << "Enter the Computer Studies marks\n";
//	cin >> Comp;
//	average = (Phy + Che + Bio + Math + Comp) / 5;
//	cout << "The average mark is:" << average << endl;
//	if (average >= 90)
//		cout << "\nThe grade of the student is A\n";
//	else if (average >= 80)
//		cout << "The grade of the student is B\n";
//	else if (average >= 70)
//		cout << "The grade of the student is C\n";
//	else if (average >= 60)
//		cout << "The grade of the student is D\n";
//	else if (average >= 40)
//		cout << "The grade of the student is E\n";
//	else
//		cout << "The grade of the student is F\n";
//	cin.get();
//	return 0;
//}

//CLASS 3.2: NESTED IF
//int main()
//{
//	//Declaring variable /  Output & Input
//	int Physics_marks, Chemistry_marks, Biology_marks, Mathematics_marks, Computer_marks, Average_mark;
//	cout << "Enter your Physics marks\n";
//	cin >> Physics_marks;
//	cout << "Enter your Chemistry marks\n";
//	cin >> Chemistry_marks;
//	cout << "Enter your Biology marks\n";
//	cin >> Biology_marks;
//	cout << "Enter you Mathematics marks\n";
//	cin >> Mathematics_marks;
//	cout << "Enter your Computer Studies marks\n";
//	cin >> Computer_marks;
//
//	//Calculating average
//	Average_mark = (Physics_marks + Chemistry_marks + Biology_marks + Mathematics_marks + Computer_marks) / 5;
//	cout << "Your average mark is:\n" << Average_mark;
//
//	//NESTED IF Statements
//	if (Average_mark >= 90)
//		cout << "\nYour grade is A";
//	else if (Average_mark >= 80)
//		cout << "\nYour grade is B";
//	else if (Average_mark >= 70)
//		cout << "\nYour grade is C";
//	else if (Average_mark >= 60)
//		cout << "\nYour grade is D";
//	else if (Average_mark >= 40)
//		cout << "\nYour grade is E";
//	else if (Average_mark >= 0)
//		cout << "\nYour grade is F";
//	cin.get();
//	return 0;
//}

//CLASS 4.0: ITERATIVE LOOPS
//CLASS 4.1.1 FOR LOOP
//int main()
//{
//	int num;
//	for (num = 1; num <= 10; num++) {
//		cout << "The number is:\n" << num << "\n";
//	}
//	cin.get();
//	return 0;
//}

//CLASS 4.1.2: FOR LOOP CONTINUATION
//int main()
//{
//	int k;
//	for (k = 12; k <= 28; k++) {
//		if (k % 2 == 0)
//		{
//			cout << "The numbers are:\n" << k << "\n";
//		}
//	}
//	cin.get();
//	return 0;
//}

//CLASS 4.1.3: FOR LOOP CONTINUATION
//int main()
//{
//	int num[10];
//	int sum = 0;
//	float average;
//	cout << "Please the enter the ten numbers" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> num[i];
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		sum = sum + num[j];
//	}
//	average = sum / 10;
//	cout << "The average of the numbers in the array is:" << endl << average;
//	cin.get();
//	return 0;
//}

//CLASS 4.2: DO WHILE LOOP
//int main()
//{
//	int num1 = 12;
//	do {
//		if (num1 % 2 == 0)
//			cout << "The even numbers between 12 and 50 are:\n" << num1 << "\n";
//		num1++;
//	} while (num1 < 50 && num1>12);
//	cin.get();
//	return 0;
//}

//CLASS 5: CASE SELECT STRUCTURES
//CLASS 5.1: CASE SELECT
//int main()
//{
//	int num1, num2, subtract, product, sum;
//	double quotient;
//	char choice;
//	cout << "Input the first number\n";
//	cin >> num1;
//	cout << "Input the second number\n";
//	cin >> num2;
//	cout << "Which arithmetic operation would you like to perform to the two numbers?\n";
//	cout << "+ for addition\n" << "- for subtraction\n" << "/ for division\n" << "* for multiplication\n";
//	cin >> choice;
//	switch (choice)
//	{
//	case '+':
//		sum = num1 + num2;
//		cout << "The sum is:\n" << sum;
//		break;
//	case '-':
//		subtract = num1 - num2;
//		cout << "The difference of the two numbers is:\n" << subtract;
//		break;
//	case '*':
//		product = num1 * num2;
//		cout << "The product of the two numbers is:\n";
//		break;
//	case '/':
//		quotient = num1 / num2;
//		cout << "The quotient of the two numbers is:\n";
//		break;
//	default:
//		cout << "Invalid choice. Try again!\n";
//		break;
//	}
//	cin.get();
//	return 0;
//}

//CLASS 5.2: CASE SELECT CONTINUATION
//int main()
//{
//	int num1, num2, sum, product, difference;
//	float quotient;
//	char choice;
//	cout << "Enter two numbers:\n";
//	cin >> num1 >> num2;
//	cout << "Which arithmetic function would you like to perform on the two numbers\n";
//	cout << "+ for addition\n" << "- for subtraction\n" << "/ for division\n" << "* for multiplication\n";
//	cin >> choice;
//	switch (choice) {
//	case '+':
//		sum = num1 + num2;
//		cout << "The sum of the two numbers is:\n" << sum;
//		break;
//	case '-':
//		difference = num1 - num2;
//		cout << "The difference of the two numbers is:\n" << difference;
//		break;
//	case '/':
//		quotient = num1 / num2;
//		cout << "The quotient of the two numbers as number 1/number 2 is:\n" << (double)quotient;
//		break;
//	case '*':
//		product = num1 * num2;
//		cout << "The product of the two numbers is:\n" << product;
//		break;
//	}
//	cin.get();
//}

//CLASS 6: FUNCTIONS
//float division(float a, float b)
//{
//	float result;
//	result = a / b;
//	return result;
//}
//int main()
//{
//	float num1, num2, quotient;
//	cout << "Enter two numbers:\n";
//	cin >> num1 >> num2;
//	quotient = division(num1, num2);
//	cout << "The quotient of the two numbers is:\n" << quotient;
//	return 0;
//}

//CLASS 6.1: FUNCTIONS CONTINUATION
//int sum(int x, int y)
//{
//	int res;
//	res = x + y;
//	return res;
//}
//
//int main()
//{
//	int num1, num2, add;
//	cout << "Enter two numbers:\n";
//	cin >> num1 >> num2;
//
//	add = sum(num1, num2);
//
//	cout << "\nResult = " << add;
//	cout << endl;
//
//	return 0;
//}

//CLASS 6.2: FUNCTIONS CONTINUATION
//SQUARING BY REFERENCE
//void squarebyreference(int& num)//num is passed by reference
//{
//	num = num * num;
//}
//int main()
//{
//	int z = 4;
//	cout << "z before calling square by reference function" << z << endl;
//	squarebyreference(z);//calling the function in the same way
//	cout << "z after invoking squarebyreference function" << z << endl;
//	cin.get();
//	return 0;
//}

//CLASS 7: POINTERS
//int main()
//{
//	double number1, number2;
//	number1 = 7.3;
//	double* ptr;
//	ptr = &number1;
//	cout << *ptr << endl;
//	ptr = &number2;
//	cout << ptr << endl;
//	cout << *ptr << endl;
//}