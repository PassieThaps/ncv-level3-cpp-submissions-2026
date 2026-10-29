#include <iostream>
#include <conio.h>
using namespace std;

// Function prototypes
void getNumbers(int numbers[]);
int countEven(int numbers[]);
void displayOdd(int numbers[]);
void sortNumbers(int numbers[]);
void displaySorted(int numbers[]);

// Function to enter 5 numbers
void getNumbers(int numbers[])
{
    for (int p = 0; p < 5; p++)
    {
        cout << "Enter number " << p + 1 << ": ";
        cin >> numbers[p];
    }
}

// Function to count even numbers
int countEven(int numbers[])
{
    int count = 0;

    for (int p = 0; p < 5; p++)
    {
        if (numbers[p] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

// Function to display odd numbers
void displayOdd(int numbers[])
{
    cout << "Odd numbers: ";

    for (int p = 0; p < 5; p++)
    {
        if (numbers[p] % 2 != 0)
        {
            cout << numbers[p] << " ";
        }
    }

    cout << endl;
}

// Function to sort numbers in ascending order
void sortNumbers(int numbers[])
{
    int temp;

    for (int p = 0; p < 4; p++)
    {
        for (int f = 0; f < 4 - p; f++)
        {
            if (numbers[f] > numbers[f + 1])
            {
                temp = numbers[f];
                numbers[f] = numbers[f + 1];
                numbers[f + 1] = temp;
            }
        }
    }
}

// Function to display sorted numbers
void displaySorted(int numbers[])
{
    cout << "Sorted numbers: ";

    for (int p = 0; p < 5; p++)
    {
        cout << numbers[p] << " ";
    }

    cout << endl;
}

// Main function
int main()
{
    // Declare array
    int numbers[5];

    // Call functions
    getNumbers(numbers);

    cout << "Number of even numbers: "
         << countEven(numbers) << endl;

    displayOdd(numbers);

    sortNumbers(numbers);

    displaySorted(numbers);

    _getch();
    return 0;
}
