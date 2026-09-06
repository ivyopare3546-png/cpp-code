#include <iostream>
using namespace std;
int main() {
    float value, sum = 0, average;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter sensor value " << i << ": ";
        cin >> value;
        sum += value;
    }
    average = sum / 5;
    cout << "Average = " << average << endl;
    return 0;
}