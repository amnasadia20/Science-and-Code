#include <iostream>
using namespace std;

int main() {
    double population;
    double growthRate;
    double carryingCapacity;
    int years;

    // Input values
    cout << "Enter initial population: ";
    cin >> population;

    cout << "Enter growth rate (e.g. 0.1 for 10%): ";
    cin >> growthRate;

    cout << "Enter carrying capacity: ";
    cin >> carryingCapacity;

    cout << "Enter number of years to simulate: ";
    cin >> years;

    cout << "\nYear\tPopulation\n";

    // Simulation loop
    for (int year = 1; year <= years; year++) {
        double change = growthRate * population * (1 - population / carryingCapacity);
        population = population + change;

        cout << year << "\t" << population << endl;
    }

    return 0;
}
