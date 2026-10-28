#include <iostream>
#include <string>

using namespace std;

int main() {
    string gender = "";

    cout << "Enter your gender by using gender code m for male and f for female?" << endl;
    getline(cin >> ws, gender); //Take the whole screen including spaces

    if (gender == "m" || gender == "M") {
        cout<<"You are a male" <<endl;
        }
        else
        if (gender == "f" || gender == "F"){
            cout<<"You are a female" <<endl;
        }
    else {
            cout<<"Gender not valid" <<endl;
        }
   return 0;
}
