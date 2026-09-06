#include <iostream>
using namespace std;
int main() {
    float voltage, safe_limit = 240;
    cout << "Enter measured voltage: ";
    cin >> voltage;
    if (voltage > safe_limit) {
        cout << "Unsafe - Above Limit" << endl;
    } else {
        cout << "Safe" << endl;
    }
    return 0;
}
    
