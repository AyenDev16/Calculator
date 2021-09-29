#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, difOfTwoNumbers ;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    difOfTwoNumbers = firstNumber - secondNumber;

    // Prints sum 
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << difOfTwoNumbers;     


    return 0;
}