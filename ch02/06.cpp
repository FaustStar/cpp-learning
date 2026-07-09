#include <iostream>

int main() {
    using namespace std;

    cout << "Enter the distance in miles: _\b";
    float miles;
    cin >> miles;

    cout << "Enter the usage of gasoline in gallons: _\b";
    float gallon;
    cin >> gallon;

    cout << "The amount of miles per gallon is " << miles / gallon << endl;

    return 0;
}