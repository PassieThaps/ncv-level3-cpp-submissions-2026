#include <iostream>
#include <conio.h>
#include <cstdlib> //rand()
#include <ctime> //time()

using namespace std;

//Prototypes
void getNum(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDiff(int num1, int num2);
int calcProd(int num1, int num2);
float calcQuot(float num1, float num2);


//Get 2 numbers
void getNum(int &num1, int &num2)
{
    cout << "Enter 2 values: ";
    cin >> num1 >> num2;
}

//Calculate the sum of 2 numbers
int calcSum(int num1, int num2)
{
    return num1 + num2;
}

//Calculate the difference of 2 numbers
int calcDiff(int num1, int num2)
{
    return num1 - num2;
}

//Calculate the product of 2 numbers
int calcProd(int num1, int num2)
{
    return num1 * num2;
}

//Calculate the quotient of 2 numbers
float calcQuot(float num1, float num2)
{
    return num1 / num2;
}

int main()
{
int n1 = 0;
int n2 = 0;
char operation;

getNum(n1, n2);


cout << n1 << " + " << n2 << " = " << calcSum(n1, n2)<<endl;
cout << n1 << " - " << n2 << " = " << calcDiff(n1, n2)<<endl;
cout << n1 << " * " << n2 << " = " << calcProd(n1, n2)<<endl;
cout << n1 << " / " << n2 << " = " << calcQuot(n1, n2)<<endl;
cout << " "<<endl;
cout << "_____Random Numbers_______"<<endl;

//Generate random numbers
n1 = rand() % 50 + 1;
n2 = rand() % 50 + 1;

//Display the numbers
cout<<"First number is: "<< n1 <<endl;
cout<<"second number is: "<< n1 <<endl;

//Get operator
cout<<"Enter an operator (+,-,/,*): ";
cin>>operation;

switch (operation)
{
    case '+':
    cout << n1 << " + " << n2 << " = " << calcSum(n1, n2)<<endl;
    break;
    case '-':
    cout << n1 << " - " << n2 << " = " << calcDiff(n1, n2)<<endl;
    break;
    case '*':
    cout << n1 << " * " << n2 << " = " << calcProd(n1, n2)<<endl;
    break;
    case '/':
    cout << n1 << " / " << n2 << " = " << calcQuot(n1, n2)<<endl;
    break;
    default:
    cout<<"Invalid! Please enter a correct operator (+,-,/,*): ";

}


_getch();
return 0;
}
