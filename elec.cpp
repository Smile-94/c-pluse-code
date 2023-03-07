#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double unitsConsumed;
double unitPrice, totalCost;
cout << "Enter the number of kW units consumed: ";
cin >> unitsConsumed;
cout << "Enter the unit price of electricity: ";
cin >> unitPrice;
if (unitsConsumed <= 100)
{ totalCost = unitsConsumed * unitPrice; }
else if (unitsConsumed <= 200)
{
totalCost = 100 * unitPrice + (unitsConsumed - 100) * unitPrice *1.5 ;
}
else { totalCost = 100 * unitPrice + 100 * 1.5 * unitPrice + (unitsConsumed - 200) * unitPrice *2 ; }

cout << "Total electricity bill: $" << setprecision(2) <<totalCost << endl; return 0; }
