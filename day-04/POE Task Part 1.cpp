#include <iostream>
#include <conio.h>
#include <cstdlib> //rand()
#include <ctime> //time()

using namespace std;

//Prototypes
void getNum(int &num1, int &num2);
void calcSum(int num1, int num2);
void calcDiff(int num1, int num2);
void calcProd(int num1, int num2);
void calcQuot(float num1, float num2);

//Get 2 numbers
void getNum(int &num1, int &num2)
{
    cout << "Enter 2 values: ";
    cin >> num1 >> num2;
}

//Calculate the sum of 2 numbers
void calcSum(int num1, int num2)
{
    cout << num1 << " + " << num2 << " = " << (num1 + num2)<<endl;
}

//Calculate the difference of 2 numbers
void calcDiff(int num1, int num2)
{
   cout << num1 << " - " << num2 << " = " << (num1 - num2)<<endl;
}

//Calculate the product of 2 numbers
void calcProd(int num1, int num2)
{
    cout << num1 << " * " << num2 << " = " << (num1 * num2)<<endl;
}

//Calculate the quotient of 2 numbers
void calcQuot(float num1, float num2)
{
    cout << num1 << " / " << num2 << " = " << (num1 / num2)<<endl;
}

int main()
{
int n1 = 0;
int n2 = 0;

getNum(n1, n2);

calcSum(n1, n2);
calcDiff(n1, n2);
calcProd(n1, n2);
calcQuot(n1, n2);


_getch();
return 0;
}
