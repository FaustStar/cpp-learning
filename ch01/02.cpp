#include <iostream>

double furlong_to_yard(double);

int main() {
    using namespace std;
    cout << "Enter a value in furlongs: ";
    double furlong;
    cin >> furlong;
    cout << furlong << " furlongs = " << furlong_to_yard(furlong) << " yards" << endl;
    return 0;
}

double furlong_to_yard(double n) {
    return n * 220;
}