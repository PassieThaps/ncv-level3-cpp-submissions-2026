#include <iostream>

using namespace std;

int main() {
    int sum;
    int num;
    float avg;
    int p;
    for (int p = 1; p <= 5; p++){

    cout << "Please enter number " << p << ": ";
    cin >> num;

    if (num >= 1 && num <= 50){
         sum = sum + num;
    }
    else {
        cout << "Invalid! Enter a number from 1 to 50" << "\n";
        p--;
    }
}
    avg = sum /5;

    cout << "The sum of the numbers is: " << sum << "\tThe average of the sum is: " << avg << endl;

return 0;
}
