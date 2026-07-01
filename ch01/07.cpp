#include <iostream>

void print_time(int, int);

using namespace std;

int main() {
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;

    cout << "Enter the number of minutes: ";
    int minute;
    cin >> minute;

    print_time(hour, minute);

    return 0;
}

void print_time(int h, int m) {
    cout << "Time: " << h << ":" << m << endl;
}