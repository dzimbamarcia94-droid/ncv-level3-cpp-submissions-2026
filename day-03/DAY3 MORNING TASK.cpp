#include <iostream>
using namespace std;

int main()
{
    int mark;
    char answer;

    // While loop
    cout << "WHILE LOOP EXAMPLE" << endl;
    cout << "Enter a mark between 0 and 100: ";
    cin >> mark;

    while (mark < 0 || mark > 100)
    {
        cout << "Invalid mark. Enter again: ";
        cin >> mark;
    }

    cout << "Valid mark entered: " << mark << endl;

    // Do-while loop
    cout << "\nDO-WHILE LOOP EXAMPLE" << endl;

    do
    {
        cout << "Do you want to write another quiz? (Y/N): ";
        cin >> answer;
    }
    while (answer != 'N' && answer != 'n');

    // For loop
    cout << "\nFOR LOOP EXAMPLE" << endl;

    for (int learner = 1; learner <= 30; learner++)
    {
        cout << "Learner " << learner << endl;
    }

    return 0;
}
