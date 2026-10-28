#include <iostream>

using namespace std;

int main() {
    int sum;
    int num;
    float avg;
    int p = 0;

    cout << "Please enter number " << p + 1 << ": ";
    cin >> num;

    while (num != -1){


         sum = sum + num;
         num ++;
         p++;

    cout << "Please enter number " << p +1 << ": ";
    cin >> num;
}
    avg = sum /p;

    cout << "The sum of the numbers is: " << sum << "\tThe average of the sum is: " << avg << endl;

return 0;
}
