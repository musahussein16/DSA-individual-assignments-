#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    
    int first = arr[0];    // Largest element
    int second = -1;       // Second largest element
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int secondLargest = findSecondLargest(arr, size);
    
    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    } else {
        cout << "Array doesn't have a second largest element" << endl;
    }
    
    return 0;
}