#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string prodCode;
    string prodName;
    double price;
    int quantInStock;

public:
    void setProduct(string pCode, string name, double p, int q)
    {
        prodCode = pCode;
        prodName = name;
        price = p;
        quantInStock = q;
    }

    string getProductCode()
    {
        return prodCode;
    }

    string getProductName()
    {
        return prodName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantInStock;
    }

};

// Non-member function 1
void GetProductData(Product &p)
{
    string pCode;
    string name;
    double price;
    int quantInStock;

    cout << "Enter product code: ";
    getline(cin >> ws, pCode);

    cout << "Enter product name: ";
    getline(cin >> ws, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantInStock;

    p.setProduct(pCode, name, price, quantInStock);
}

// Non-member function 2
void DisplayProduct(Product p)
{
    cout << "\nProduct Code: " << p.getProductCode();
    cout << "\nProduct Name: " << p.getProductName();
    cout << "\nPrice: R" << p.getPrice();
    cout << "\nQuantity: " << p.getQuantity();
    cout << endl;
}

// Non-member function 3
void prodCompare(Product p1, Product p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    if (!name1.empty() && !name2.empty())
    {
        if (name1[0] == name2[0])
        {
            cout << "\nBoth product names start with the same character." << endl;
        }
        else
        {
            cout << "\nProduct names do not start with the same character." << endl;
        }
    }
    else
    {
        cout << "\nCannot compare empty product names.";
    }
}

int main()
{
    Product product1, product2, product3;

    cout << fixed << setprecision(2);

    cout << "----- PRODUCT-----" << endl;

    cout << "\nEnter Product 1 Details" << endl;
    GetProductData(product1);

    cout << "\nEnter Product 2 Details" << endl;
    GetProductData(product2);

    cout << "\nEnter Product 3 Details" << endl;
    GetProductData(product3);

    cout << "\n----- PRODUCT DETAILS -----" << endl;

    DisplayProduct(product1);
    DisplayProduct(product2);
    DisplayProduct(product3);


    cout << "\n----- PRODUCT COMPARISON -----" << endl;

    prodCompare(product1, product2);

    return 0;
}
