#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void getNumbers(int &num1, int &num2);
int calculateSum(int num1, int num2);
int calculateDifference(int num1, int num2);
int calculateProduct(int num1, int num2);
double calculateQuotient(int num1, int num2);
int main()
{
    int num1, num2;
    char op;
    srand(time(0));
    num1 = rand() % 50 + 1;
    num2 = rand() % 50 + 1;
    cout << "Random Number 1: " << num1 << endl;
    cout << "Random Number 2: " << num2 << endl;

    cout << "\nEnter an operator (+, -, *, /): ";
    cin >> op;
    switch(op)
    {
        case '+':
            cout << "Answer = "
                 << calculateSum(num1, num2) << endl;
            break;
        case '-':
            cout << "Answer = "
                 << calculateDifference(num1, num2) << endl;
            break;
        case '*':
            cout << "Answer = "
                 << calculateProduct(num1, num2) << endl;
            break;
        case '/':
            cout << "Answer = "
                 << calculateQuotient(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator entered!" << endl;
    }
    return 0;
}
void getNumbers(int &num1, int &num2)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}
int calculateSum(int num1, int num2)
{
    return num1 + num2;
}
int calculateDifference(int num1, int num2)
{
    return num1 - num2;
}
int calculateProduct(int num1, int num2)
{
    return num1 * num2;
}
double calculateQuotient(int num1, int num2)
{
    return (double)num1 / num2;
}
