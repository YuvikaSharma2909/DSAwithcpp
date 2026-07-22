// -------stl set------
#include <iostream>
#include <set>
using namespace std;
int main() {
    // Creating a set of integers
    set<int> mySet;

    // Inserting elements into the set
    mySet.insert(10);
    mySet.insert(30);
    mySet.insert(20);
    mySet.insert(5);
    mySet.insert(20); // Duplicate element, will not be added

    cout << "Set elements in sorted order: ";
    for ( int element : mySet) {
        cout << element << " "; // Accessing elements in sorted order
    }
    cout << endl;

    // Checking if an element exists in the set
    int searchElement = 20;
    if (mySet.find(searchElement) != mySet.end()) {
        cout << searchElement << " found in the set." << endl;
    } else {
        cout << searchElement << " not found in the set." << endl;
    }

    // Removing an element from the set
    mySet.erase(10);
    cout << "Set elements after removing 10: ";
    for ( int element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}