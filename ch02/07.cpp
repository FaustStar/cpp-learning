#include <iostream>

int main() {
    using namespace std;
    const float Miles_per_100km = 62.14;
    const float L_per_gal = 3.875;

    cout << "Enter the usage of gasoline in litres (per 100 km): _\b";
    float litres;
    cin >> litres;

    float gallon = litres / L_per_gal;
    cout << "The amount of miles per gallon is " << Miles_per_100km / gallon << endl;

    return 0;
}