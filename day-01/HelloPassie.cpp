#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Are you male or female?" << endl;
    getline(cin >> ws, gender); //Take the whole screen including spaces
    if (gender == "m" || gender == "M") {
        cout<<"Hello, " << name << " You are a wonderful gentleman" <<endl;
    }
    if (gender == "f" || gender == "F"){

        cout<<"Hello, " << name << " You are a great lady" <<endl;
    }
   // else{
      //  cout<<"Hello, " << name << " You are a great person" <<endl;
   // }

    return 0;
}
