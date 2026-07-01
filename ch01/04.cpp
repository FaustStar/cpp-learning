#include <iostream>

int year_to_month(int);

int main() {
    using namespace std;
    cout << "Enter your age in years: ";
    int year;
    cin >> year;
    cout << "Your age in months is " << year_to_month(year) << "." << endl;
    return 0;
}

int year_to_month(int n) {
    return n * 12;
}