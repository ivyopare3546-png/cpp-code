#include <iostream>
using namespace std;
int main() {
    float r1, r2, r3, largest;
    cout << "Enter R1 R2 R3: ";
    cin >> r1 >> r2 >> r3;
    largest = r1;
    if (r2 > largest) largest = r2;
    if (r3 > largest) largest = r3;
    cout << "Largest resistance = " << largest << endl;
    return 0;
}