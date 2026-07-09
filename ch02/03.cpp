#include <iostream>

int main() {
    using namespace std;
    const int Sec_per_min = 60; // 1 minute = 60 seconds
    const int Min_per_dgr = 60; // 1 degree = 60 minutes

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    cout << "Enter a latitude in degrees: _\b";
    int degrees;
    cin >> degrees;

    cout << "Enter a latitude in minutes: _\b";
    int minutes;
    cin >> minutes;

    cout << "Enter a latitude in seconds: _\b";
    int seconds;
    cin >> seconds;

    float latitude = degrees + float (minutes) / Min_per_dgr + float (seconds) / (Sec_per_min * Min_per_dgr);
    cout << degrees << " degrees, "
        << minutes << " minutes, "
        << seconds << " seconds = "
        << latitude << " degrees" << endl;

    return 0;
}