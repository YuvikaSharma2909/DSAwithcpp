// --------stl stack--------
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s; // Creating a stack of integers
// but use vector or deque internally to implement stack
  // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
     // Accessing the top element

    s.pop(); // Removing the top element
    // only remove top element does not return any value
    cout << "Top element after pop: " << s.top() << endl;

    cout << "Size of the stack: " << s.size() << endl; // Getting the size of the stack

    return 0;
}
// stack follows LIFO  (last in first out)
// eg. plates stacking one on another , you can only remove the top plate first
