#include <iostream>

double C_to_F(double);

int main() {
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double temperature_C;
    cin >> temperature_C;
    cout << temperature_C << " degrees Celsius is " << C_to_F(temperature_C) << " degrees Fahrenheit." << endl;
    return 0;
}

double C_to_F(double n) {
    return 1.8 * n + 32;
}