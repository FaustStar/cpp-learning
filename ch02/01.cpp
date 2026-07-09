#include <iostream>

int main() {
    using namespace std;
    const int In_per_ft = 12; // 1 foot = 12 inches

    cout << "Enter the height in inches: __\b\b";
    int height;
    cin >> height;

    int foots = height / In_per_ft;
    int inches = height % In_per_ft;
    cout << "The height: " << foots << "\'"
        << inches << "\"" << endl;

    return 0;
}