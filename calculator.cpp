#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, difOfTwoNumbers, prodOfTwoNumbers, quotientOfTwoNumbers ;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    difOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotientOfTwoNumbers =  firstNumber / secondNumber;

    // Prints sum 
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << difOfTwoNumbers;   
    cout << endl << firstNumber << " * " <<  secondNumber << " = " << prodOfTwoNumbers;   
    cout << endl << firstNumber << " / " <<  secondNumber << " = " << quotientOfTwoNumbers;       
    


    return 0;
}