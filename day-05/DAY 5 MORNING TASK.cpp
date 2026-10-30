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
    Product()
    {
        productName = "";
        price = 0;
        quantityInStock = 0;
    }

    void setProductName(string name)
    {
        if (name != "")
        {
            productName = name;
        }
    }

    void setPrice(double p)
    {
        if (p >= 0)
        {
            price = p;
        }
    }

    void setQuantityInStock(int qty)
    {
        if (qty >= 0)
        {
            quantityInStock = qty;
        }
    }

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
};

void displayProductData(Product p)
{
    cout << "\nProduct Information" << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
}

void compareProductName(Product p1, Product p2)
{
    if (p1.getProductName()[0] == p2.getProductName()[0])
    {
        cout << "\nThe two product names start with the same character." << endl;
    }
    else
    {
        cout << "\nThe two product names do not start with the same character." << endl;
    }
}

int main()
{
    Product product1;
    Product product2;

    // First product
    product1.setProductName("School Bag");
    product1.setPrice(399.99);
    product1.setQuantityInStock(25);

    // Second product
    product2.setProductName("Sports Shoes");
    product2.setPrice(699.99);
    product2.setQuantityInStock(10);
