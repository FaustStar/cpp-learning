#include <iostream>

int main() {
    using namespace std;
    const int Sec_per_min = 60; // 1 minute = 60 seconds
    const int Min_per_hr = 60; // 1 hour = 60 minutes
    const int Hr_per_day = 24; // 1 day = 24 hours

    cout << "Enter the number of seconds: _\b";
    long long sec;
    cin >> sec;

    long sec_per_day = Sec_per_min * Min_per_hr * Hr_per_day;
    int sec_per_hr = Sec_per_min * Min_per_hr;
    
    long long days = sec / sec_per_day;
    int hours = (sec % sec_per_day) / sec_per_hr;
    int minutes = ((sec % sec_per_day) % sec_per_hr) / Sec_per_min;
    int seconds = ((sec % sec_per_day) % sec_per_hr) % Sec_per_min;
    cout << sec << " seconds = "
        << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, "
        << seconds << " seconds" << endl;

    return 0;
}