#include <iostream>
using namespace std;
void populateArray(int numbers[]);
int countEvenNumbers(int numbers[]);
void displayOddNumbers(int numbers[]);
void sortArray(int numbers[]);
void displayArray(int numbers[]);
int main()
{
    int numbers[5];
    int evenCount;
    populateArray(numbers);
    evenCount = countEvenNumbers(numbers);
    cout << "\nNumber of even numbers: " << evenCount << endl;
    displayOddNumbers(numbers);
    sortArray(numbers);
    cout << "\nSorted values:" << endl;
    displayArray(numbers);
    return 0;
}
void populateArray(int numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
}
int countEvenNumbers(int numbers[])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
void displayOddNumbers(int numbers[])
{
    cout << "\nOdd numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}
void sortArray(int numbers[])
{
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}
void displayArray(int numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
