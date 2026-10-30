#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PRICE_PER_KG = 18.50;
    const double VAT_RATE = 0.15;

    // Variables
    double kilograms;
    double cost;
    double vat;
    double totalCost;

    // Input
    cout << "Enter kilograms of mealie meal bought: ";
    cin >> kilograms;

    // Calculations
    cost = kilograms * PRICE_PER_KG;
    vat = cost * VAT_RATE;
    totalCost = cost + vat;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n----- PURCHASE RECEIPT -----" << endl;
    cout << "Kilograms Bought : " << kilograms << " kg" << endl;
    cout << "Cost Before VAT  : R" << cost << endl;
    cout << "VAT Amount       : R" << vat << endl;
    cout << "Total Cost       : R" << totalCost << endl;

    return 0;
}
