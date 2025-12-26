#include <iostream>
using namespace std;
double calculateTotalResistance(double resistors[], int numberOfResistors);
main()
{
    int numberOfResistors = 0;
    double totalResistance=0;

    cout << "Enter the number of resistors in the series circuit : ";
    cin >> numberOfResistors;

    double resistors[numberOfResistors] = {0};

    cout << "Enter the resistance values (in ohms) of the " << numberOfResistors << " resistors , one per line : "<<endl;
    for (int counter = 0; counter < numberOfResistors; counter = counter + 1)
    {
        cin >> resistors[counter];
    }

    totalResistance=calculateTotalResistance(resistors,numberOfResistors);

    cout << "The total resistance of the series circuit is " << totalResistance << " ohms.";
}
double calculateTotalResistance(double resistors[], int numberOfResistors)
{
    double totalResistance = 0;
    for (int counter = 0; counter < numberOfResistors; counter = counter + 1)
    {
        totalResistance = totalResistance + resistors[counter];
    }
    return totalResistance;
}