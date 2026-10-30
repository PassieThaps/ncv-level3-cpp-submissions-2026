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
    // Default constructor
    Product()
    {
        prodCode = "";
        prodName = "";
        price = 0;
        quantInStock = 0;
    }

    // Setter methods
    void setProductCode(string code)
    {
        if (code != "")
        {
            prodCode = code;
        }
    }

    void setProductName(string name)
    {
        if (name != "")
        {
            prodName = name;
        }
    }

    void setPrice(double p)
    {
        if (p >= 0)
        {
            price = p;
        }
    }

    void setQuantityInStock(int quantity)
    {
        if (quantity >= 0)
        {
            quantInStock = quantity;
        }
    }

    // Getter methods
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

    int getQuantityInStock()
    {
        return quantInStock;
    }
};

int main()
{
    // Create first product
    Product product1;

    product1.setProductCode("Pr01");
    product1.setProductName("Cabagges");
    product1.setPrice(25.50);
    product1.setQuantityInStock(30);

    // Create second product
    Product product2;

    product2.setProductCode("Pr02");
    product2.setProductName("carrots");
    product2.setPrice(15.99);
    product2.setQuantityInStock(15);

    // Display product information
    cout << fixed << setprecision(2);

    cout << "\nProduct 1\n";
    cout << "\n---------\n";

    cout << "Product Code: " << product1.getProductCode() << endl;

    cout << "Product Name: " << product1.getProductName() << endl;

    cout << "Price: R" << product1.getPrice() << endl;

    cout << "Quantity in Stock: " << product1.getQuantityInStock() << endl;

    cout << "\n****************************\n";
    cout << "\nProduct 2\n";
    cout << "\n---------\n";

    cout << "Product Code: " << product2.getProductCode() << endl;

    cout << "Product Name: " << product2.getProductName() << endl;

    cout << "Price: R" << product2.getPrice() << endl;

    cout << "Quantity in Stock: " << product2.getQuantityInStock() << endl;

    return 0;
}
