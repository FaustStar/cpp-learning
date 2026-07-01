#include <iostream>

double light_distance_converter(double);

int main() {
    using namespace std;
    cout << "Enter the number of light years: ";
    double light_year;
    cin >> light_year;
    cout << light_year << " light years = " << light_distance_converter(light_year) << " astronomical units." << endl;
    return 0;
}

double light_distance_converter(double n) {
    return n * 63240;
}