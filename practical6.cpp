#include <iostream>
using namespace std;

// Binary search with recursion
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            return binarySearchRecursive(arr, mid + 1, high, key);
        return binarySearchRecursive(arr, low, mid - 1, key);
    }
    return -1;
}

// Binary search without recursion
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int size, key;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements in the array (in ascending order): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Binary search with recursion
    int index1 = binarySearchRecursive(arr, 0, size - 1, key);
    if (index1 != -1)
        cout << "Element found at index " << index1 << " using binary search with recursion." << endl;
    else
        cout << "Element not found using binary search with recursion." << endl;

    // Binary search without recursion
    int index2 = binarySearch(arr, size, key);
    if (index2 != -1)
        cout << "Element found at index " << index2 << " using binary search without recursion." << endl;
    else
        cout << "Element not found using binary search without recursion." << endl;

    return 0;
}
