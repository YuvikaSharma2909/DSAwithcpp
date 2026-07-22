// -----map-----
#include <map>
#include <iostream>
using namespace std;
int main() {
    // Creating a map to store integer keys and string values
    map<int, string> myMap;

    // Inserting key-value pairs into the map
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    // Accessing and displaying elements in the map
    cout << "Map elements:" << endl;
    for (auto pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Checking if a key exists in the map
    int searchKey = 2;
    if (myMap.find(searchKey) != myMap.end()) {
        cout << "Key " << searchKey << " found with value: " << myMap[searchKey] << endl;
    } else {
        cout << "Key " << searchKey << " not found in the map." << endl;
    }

    // Removing a key-value pair from the map
    myMap.erase(1);
    cout << "Map elements after removing key 1:" << endl;
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}