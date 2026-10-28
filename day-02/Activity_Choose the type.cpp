#include <iostream>
#include <string>

using namespace std;

int main(){

//Declare and assign
int ncv_level = 3;
int test_mark = 60;
float class_avg = 55;
string poe_comp = "Yes";
char rating_sym = 'C';
double taxi_fare = 15.30;
int no_learners = 36;
int temp = 19;
const double(vat) = 0.15;

//Display
cout<<"NCV Level :\t" << ncv_level <<"\n";
cout<<"Test Mark :\t" << test_mark << "\n";
cout<<"Class Average :\t" << class_avg << "\n";
cout<<"POE Complete :\t" << poe_comp << endl;
cout<<"Rating Symbol :\t" << rating_sym << endl;
cout<<"Taxi Fare :\t" << taxi_fare << endl;
cout<<"Number of learners :\t" << no_learners << endl;
cout<<"Sutherland overnight temperature :\t" << temp << endl;
cout<<"VAT rate :\t" << vat << endl;

return 0;
}
