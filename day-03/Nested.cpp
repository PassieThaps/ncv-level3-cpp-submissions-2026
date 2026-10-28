#include <iostream>
#include <string>

using namespace std;

int main() {
    char gender;
    string description;

    cout << "Enter your gender by using gender code m for male and f for female?" << endl;
    cin >> gender;

    if (gender == 'm' || gender == 'M') {
        description = "You are a male";
        }
        else
        if (gender == 'f' || gender == 'F'){
            description = "You are a female";
        }
        else {
            description = "Gender not valid";
        }
        cout << description;

   return 0;
}
