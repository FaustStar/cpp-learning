#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    const int In_per_ft = 12; // 1 foot = 12 inches
    const float M_per_in = 0.0254; // 1 inch = 0.0254 meters
    const float Lbs_per_kg = 2.2; // 1 pound = 1 / 2.2 kg

    cout << "Enter the height in foots: _\b";
    int foots;
    cin >> foots;

    cout << "Enter the height in inches: _\b";
    int inches;
    cin >> inches;

    cout << "Enter the weight in pounds: _\b";
    float lbs;
    cin >> lbs;

    int height_in = foots * In_per_ft + inches;
    float height_m = height_in * M_per_in;

    float weight_kg = lbs / Lbs_per_kg;

    float bmi = weight_kg / pow(height_m, 2);
    cout << "BMI: " << bmi << endl;

    return 0;
}