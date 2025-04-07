include <iostream> 
using namespace std; 
 
int findsmallestnumber(int arr[], int size) { 
    int smallest = arr[0]; 
    for (int i = 1; i < size; i++) { 
        if (arr[i] < smallest) { 
            smallest = arr[i]; 
        } 
    } 
    return smallest; 
} 
 
int main() { 
    int arr[] = {50, 20, 30, 80, 100}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int smallest = findsmallestnumber(arr, size); 
    cout << "The smallest number  in the array is: " << smallest << 
endl; 
    return 0; 
} 
 