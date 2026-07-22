// -------stl:queue--------
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q; // Creating a queue of integers

    // Enqueuing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // Accessing the front element
    cout << "Back element: " << q.back() << endl;   // Accessing the back element

    q.pop(); // Dequeuing the front element
    // it only removes the front element and does not return any value
    cout << "Front element after pop: " << q.front() << endl;

    cout << "Size of the queue: " << q.size() << endl; 
    // Getting the size of the queue
    
    // check if queue is empty or not
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
// queue follows FIFO (first in first out)
// eg. people standing in a line , the person who comes first will be served first
// the person who comes last will be served last
// like print queue , the first document sent to printer will be printed first