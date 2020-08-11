#include <iostream>
using namespace std;

int main()
{
    float firstNumber, secondNumber, prodOfTwoNumbers;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    cout << firstNumber << " * " <<  secondNumber << " = " << prodOfTwoNumbers;

    return 0;
}
