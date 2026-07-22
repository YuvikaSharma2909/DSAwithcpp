// rotate array to the right by k steps
#include<iostream>
using namespace std;
void rotate(int arr[], int n, int k) {
    k = k % n; // in case k is greater than n
    int temp[k];
    
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the temporary array elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

   