#include <iostream>
using namespace std;
int main() {
    float voltage, current, power;
    cout << "Enter voltage: ";
    cin >> voltage;
    cout << "Enter current: ";
    cin >> current;
    power = voltage * current;
    cout << "Power = " << power << " Watts" << endl;
    return 0;
}