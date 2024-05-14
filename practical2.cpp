#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int& size) {
    unordered_set<int> seen;

    int j = 0;
    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[j++] = arr[i];
        }
    }

    size = j;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 1, 7, 8, 4, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr, size);

    cout << "Array after removing duplicates:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
