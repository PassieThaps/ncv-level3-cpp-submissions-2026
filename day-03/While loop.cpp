#include <iostream>

using namespace std;

int main() {
    int sum;
    int num;
    float avg;
    int p = 0;

    while (p < 5){

    cout << "Please enter number " << p + 1 << ": ";
    cin >> num;

    if (num >= 1 && num <= 50){
         sum = sum + num;
         p++;
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
