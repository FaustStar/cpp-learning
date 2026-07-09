#include <iostream>

int main() {
    using namespace std;

    cout << "Enter the world\'s population: _\b";
    long long world_pop;
    cin >> world_pop;

    cout << "Enter the population of the US: _\b";
    long long us_pop;
    cin >> us_pop;

    auto res = static_cast<long double> (us_pop) / world_pop * 100;
    cout << "The population of the US is " << res << "\% of the world population." << endl;

    return 0;
}