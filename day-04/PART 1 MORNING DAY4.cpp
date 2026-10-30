#include <iostream>
using namespace std;
void calculateSum(double num1, double num2);
void calculateDifference(double num1, double num2);
void calculateProduct(double num1, double num2);
void calculateQuotient(double num1, double num2);
int main()
{
double num1,num2;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
calculateSum(num1, num2);
calculateDifference(num1, num2);
calculateProduct(num1, num2);
calculateQuotient(num1, num2);
return 0;
}
void calculateSum(double num1, double num2)
{
cout << "Sum = " << num1 + num2 << endl;
}
void calculateDifference(double num1, double num2)
{
cout << "Difference = " << num1 - num2 << endl;
}
void calculateProduct(double num1, double num2)
{
cout << "Product = " << num1 * num2 << endl;
}
void calculateQuotient(double num1, double num2)
{
if (num2 != 0)
cout << "Quotient = " << num1 / num2 << endl;
else
cout << "Cannot divide by zero!" << endl;
}
