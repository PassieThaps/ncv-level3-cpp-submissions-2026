#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialise constants
    const double VAT_RATE = 0.15;
    const double PRINTING_FEE = 20.00;

    // Declare variables
    int quantity;
    double price;
    double subtotal;
    double vat;
    double totalCost;

    // Get input from user
    cout << "Enter number of T-shirts: ";
    cin >> quantity;

    cout << "Enter price per T-shirt: R";
    cin >> price;

    // Calculate cost
    subtotal = quantity * (price + PRINTING_FEE);

    // Calculate VAT
    vat = subtotal * VAT_RATE;

    // Calculate total cost
    totalCost = subtotal + vat;

    // Display formatted output
    cout << fixed << setprecision(2);

    cout << "\nSCHOOL T-SHIRT ORDER" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: R" << subtotal << endl;
    cout << "VAT (15%): R" << vat << endl;
    cout << "Total Cost: R" << totalCost << endl;

    return 0;
}
