#include <iostream>

void print_1(void);
void print_2(void);

using namespace std;

int main() {
    print_1();
    print_1();
    print_2();
    print_2();
    return 0;
}

void print_1(void) {
    cout << "Three blind mice" << endl;
}

void print_2(void) {
    cout << "See how they run" << endl;
}