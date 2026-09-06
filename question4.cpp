#include <iostream>
using namespace std;
int main() {
    float battery;
    cout << "Enter battery voltage: ";
    cin >> battery;
    if (battery < 11) {
        cout << "Battery: LOW" << endl;
    } else if (battery <= 13.5) {
        cout << "Battery: NORMAL" << endl;
    } else {
        cout << "Battery: FULL" << endl;
    }
    return 0;
}