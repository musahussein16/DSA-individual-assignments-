#include <iostream>
using namespace std;

// Function to swap two pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 1. Bubble Sort with Pointers
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

// 2. Selection Sort with Pointers
void selectionSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int* min_ptr = arr + i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *min_ptr) {
                min_ptr = arr + j;
            }
        }
        if (min_ptr != arr + i) {
            swap(arr + i, min_ptr);
        }
    }
}

// 3. Quick Sort with Pointers
int* partition(int* low, int* high) {
    int pivot = *high;
    int* i = low - 1;
    
    for (int* j = low; j < high; j++) {
        if (*j <= pivot) {
            i++;
            swap(i, j);
        }
    }
    swap(i + 1, high);
    return (i + 1);
}

void quickSort(int* low, int* high) {
    if (low < high) {
        int* pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

// Function to print array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Original array: ";
    printArray(arr1, n);

    // Bubble Sort
    bubbleSort(arr1, n);
    cout << "Bubble Sort result: ";
    printArray(arr1, n);

    // Selection Sort
    selectionSort(arr2, n);
    cout << "Selection Sort result: ";
    printArray(arr2, n);

    // Quick Sort
    quickSort(arr3, arr3 + n - 1);
    cout << "Quick Sort result: ";
    printArray(arr3, n);

    return 0;
}