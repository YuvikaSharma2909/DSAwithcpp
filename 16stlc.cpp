// ------deque------
#include <deque>
#include <iostream>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    cout << "Elements in deque: ";
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Front element: " << d.front() << endl;
    cout << "Back element: " << d.back() << endl;

    d.pop_front();
    cout << "After popping front, front element: " << d.front() << endl;

    d.pop_back();
    cout << "After popping back, back element: " << d.back() << endl;

    cout << "Size of deque: " << d.size() << endl;

    return 0;
}