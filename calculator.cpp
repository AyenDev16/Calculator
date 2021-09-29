#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
    cout << "CALCULATOR BY AYEN" << endl
    << "--------------------------------"<< endl;

    int firstNumber, secondNumber, sumOfTwoNumbers, difOfTwoNumbers, prodOfTwoNumbers, quotientOfTwoNumbers, modOfTwoNumbers ;
    //int powOfFirstNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    difOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotientOfTwoNumbers =  firstNumber / secondNumber;
    modOfTwoNumbers =  firstNumber % secondNumber;

    // Prints sum 
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << difOfTwoNumbers;   
    cout << endl << firstNumber << " * " <<  secondNumber << " = " << prodOfTwoNumbers;   
    cout << endl << firstNumber << " / " <<  secondNumber << " = " << quotientOfTwoNumbers;       
    cout << endl << firstNumber << " % " <<  secondNumber << " = " << modOfTwoNumbers;       
    //cout << endl << pow(firstNumber,3);

    return 0;
}