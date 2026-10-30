#include <iostream>
using namespace std;

int main()
{
    int passengers;
    int trips = 0;
    int totalPassengers = 0;
    int busiestTrip = 0;
    double income = 0;

    cout << "=== Taxi Day Log ===" << endl;
    cout << "Fare per passenger = R18" << endl;

    cout << "Enter passengers (0 to stop): ";
    cin >> passengers;

    while (passengers != 0)
    {
        // Validation
        if (passengers >= 0 && passengers <= 15)
        {
            trips = trips + 1;
            totalPassengers = totalPassengers + passengers;

            if (passengers > busiestTrip)
            {
                busiestTrip = passengers;
            }
        }
        else
        {
            cout << "Invalid number! Enter a value from 0 to 15." << endl;
        }

        cout << "Enter passengers (0 to stop): ";
        cin >> passengers;
    }

    income = totalPassengers * 18;

    cout << endl;
    cout << "----- Daily Report -----" << endl;
    cout << "Trips: " << trips << endl;
    cout << "Passengers: " << totalPassengers << endl;
    cout << "Income: R" << income << endl;
    cout << "Busiest Trip: " << busiestTrip << " passengers" << endl;

    return 0;
}
