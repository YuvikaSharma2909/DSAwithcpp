#include <iostream>
using namespace std;

int findPivotIndex(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start; // index of smallest element
}

int binarySearch(int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int searchInRotatedArray(int arr[], int size, int target) {
    int pivot = findPivotIndex(arr, size);
    
    // If target is in right sorted half
    if (target >= arr[pivot] && target <= arr[size - 1]) {
        return binarySearch(arr, pivot, size - 1, target);
    }
    // Else, target is in left sorted half
    return binarySearch(arr, 0, pivot - 1, target);
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = searchInRotatedArray(arr, size, target);
    cout << "Index: " << index << endl;
}
