// --------- std list---------
#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> l; // Creating a list of integers

    // Adding elements to the list
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0); // Adding element at the front

    cout << "Elements in the list: ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front element: " << l.front() << endl;
    cout << "Back element: " << l.back() << endl;

    l.pop_front(); // Removing front element
    cout << "After popping front, front element: " << l.front() << endl;

    l.pop_back(); // Removing back element
    cout << "After popping back, back element: " << l.back() << endl;

    cout << "Size of the list: " << l.size() << endl;

    l.erase(l.begin()); // Erasing the first element
    cout << "After erasing first element, elements in the list: ";
    for (int i : l) {
        cout << i << " ";
    }
        

    return 0;
}