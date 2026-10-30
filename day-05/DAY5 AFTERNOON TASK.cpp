#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product()
    {
        productName = "";
        price = 0;
        quantityInStock = 0;
    }

    // Setters
    void setProductName(string name)
    {
        productName = name;
    }

    void setPrice(double p)
    {
        price = p;
    }

    void setQuantityInStock(int qty)
    {
        quantityInStock = qty;
    }

    // Getters
    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantityInStock()
    {
        return quantityInStock;
    }

    // Function to display product information
    void displayProductData()
    {
        cout << "\nProduct Information" << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: R" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
    }

    // Function to check first letter
    bool isProductName(char letter)
    {
        if (productName[0] == letter)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Product p;

    p.setProductName("School Bag");
    p.setPrice(350.50);
    p.setQuantityInStock(20);

    p.displayProductData();

    if (p.isProductName('S'))
    {
        cout << "The product name starts with S." << endl;
    }
    else
    {
        cout << "The product name does not start with S." << endl;
    }

    return 0;
}
