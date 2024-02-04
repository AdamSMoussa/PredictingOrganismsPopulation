#include <iostream>
#include <cmath>

using namespace std;


double calculatePopulation(double initialPopulation, double growthRate, double carryingCapacity, int time) {
    return carryingCapacity / (1 + ((carryingCapacity - initialPopulation) / initialPopulation) * exp(-growthRate * time));
}

int main() {

    double initialPopulation;
    double growthRate;
    double carryingCapacity;
    int time;

    cout << "Hi! You can use this growth calculator for basically anything, you just need to know a few things before you get started, the initial population of sad organism, growth rate,and carrying capacity. If you have all the information then go ahead and enjoy this program!";
    cout << endl;
    cout << "Enter initial population: ";
    cin >> initialPopulation;

    cout << "Enter growth rate (between 0 and 1): ";
    cin >> growthRate;

    cout << "Enter carrying capacity: ";
    cin >> carryingCapacity;

    cout << "Enter time period: ";
    cin >> time;

    if (initialPopulation <= 0 || growthRate <= 0 || growthRate >= 1 || carryingCapacity <= 0 || time < 0) {
        cerr << "Invalid input. Please enter valid parameters." << endl;
        return 1; 
    }

  
    double predictedPopulation = calculatePopulation(initialPopulation, growthRate, carryingCapacity, time);
    cout << "Predicted population after " << time << " time units: " << predictedPopulation << endl;

    return 0;
}
