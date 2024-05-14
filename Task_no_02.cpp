#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;
    bool continue_Calculation = true;
    while (continue_Calculation)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter operation (+, -, *, /, %) : ";
        cin >> operation;
        switch (operation)
        {
        case '+':
            cout <<"Sum of "<< num1 <<" and "<< num2 << " is " << num1 + num2;
            break;
        
        case '-':
            cout <<"Substraction of "<< num1 <<" and "<< num2 << " is " << num1 - num2;
            break;
        
        case '*':
            cout <<"Multiplicatio/ of "<< num1 <<" and "<< num2 << " is " << num1 * num2;
            break;
        
        case '/':
            cout <<"Division of "<< num1 <<" and "<< num2 << " is " << num1 / num2;
            break;
        
        case '%':
            cout <<"Modulo of "<< num1 <<" and "<< num2 << " is " << num1 % num2;
            break;
        
        default:
            cout << "Invalid choice";
            break;
        }
        char yes_no;
        cout <<"\n \nDo you want to perform another calculation? (y/n): ";
        cin >> yes_no;
        if (yes_no != 'y' && yes_no != 'Y')
        {
            continue_Calculation = false;
        }
    }
    return 0;
}
