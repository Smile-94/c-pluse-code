#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double unitPrice, numUnits, totalCost;

    // Prompt user to input unit price and number of units consumed
    cout << "Enter unit price of electricity: ";
    cin >> unitPrice;
    cout << "Enter number of units consumed: ";
    cin >> numUnits;

    // Calculate total cost of electricity bill based on number of units consumed and unit price
    if (numUnits <= 100) {
        totalCost = numUnits * unitPrice;
    }
    else if (numUnits <= 200) {
        totalCost = 100 * unitPrice + (numUnits - 100) * unitPrice * 1.5;
    }
    else {
        totalCost = 100 * unitPrice + 100 * unitPrice * 1.5 + (numUnits - 200) * unitPrice * 2;
    }

    // Print total cost of electricity bill rounded to 2 decimal places
    cout << "Total cost of electricity bill: $" << fixed << setprecision(2) << totalCost << endl;

    return 0;
}
