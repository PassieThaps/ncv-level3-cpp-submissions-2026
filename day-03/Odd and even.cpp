#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialise constants
  int num_1, num_2 = 0;

  cout << "Enter the first number: ";
  cin >> num_1;

  cout << "Enter the second number: ";
  cin >> num_2;

  if (num_1 % 2 == 0 && num_2 % 2 == 0){
  cout << "numbers entered are even numbers" << endl;
  }
  else{
   cout << "numbers entered are not both even" << endl;
   }


    return 0;
}
