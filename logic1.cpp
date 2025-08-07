#include <iostream>
using namespace std;

int main() {
    int n = 4312;
    int digit;
    
    cout << "Digits in reverse order: ";
    while(n > 0) {
        digit = n % 10;
        cout << digit << " ";   // prints digits: 2 1 3 4
        n = n / 10;
    }

    return 0;
}