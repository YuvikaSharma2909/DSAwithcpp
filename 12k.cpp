
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int arr1[100], arr2[100];

    // Input first array
    cout << "Enter the size of first array: ";
    cin >> n1;

    cout << "Enter " << n1 << " elements for first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input second array
    cout << "Enter the size of second array: ";
    cin >> n2;

    cout << "Enter " << n2 << " elements for second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Output both arrays
    cout << "\nFirst array elements: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nSecond array elements: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }










    return 0;
}