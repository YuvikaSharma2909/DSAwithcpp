// -------priority queue ------
#include <iostream>
#include <queue>
using namespace std;
int main() {
    // Creating a max-heap priority queue of integers
    priority_queue<int> maxHeap;

    // Inserting elements into the max-heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    cout << "Max-Heap elements in order of priority: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Accessing the top (maximum) element
        maxHeap.pop(); // Removing the top element
    }
    cout << endl;

    // Creating a min-heap priority queue of integers
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements into the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Min-Heap elements in order of priority: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Accessing the top (minimum) element
        minHeap.pop(); // Removing the top element
    }
    cout << endl;

    return 0;
}