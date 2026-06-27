#include <iostream>
using namespace std;
/*
 Problem: Model population growth: Use differential equations or a simple agent-based model to simulate how a population changes over time, considering birth rates, death rates, and carrying capacity.
*/
int main() {
    double population;
    double growthRate;
    double carryingCapacity;
    int years;

    // Input values
    cout << "Enter initial population: ";
    cin >> population;

    cout << "Enter growth rate (e.g. 0.1 for 10%): ";
    cin >> growthRate;\
