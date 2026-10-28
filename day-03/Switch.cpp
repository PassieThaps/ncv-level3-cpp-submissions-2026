#include <iostream>
#include <string>

using namespace std;

int main() {
    char gender;
    string description;

    cout << "Enter your gender by using gender code m for male and f for female?" << endl;
    cin >> gender;

    switch (gender){

    case 'm': description = "You are male";
    case 'M': description = "You are male";
    break;
    case 'f': description = "You are female";
    case 'F': description = "You are female";
    break;
    default: description = "Gender not valid";
    }
    cout << description << endl;

return 0;
}
