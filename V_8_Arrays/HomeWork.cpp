// FIND INDEX OF SMALLEST NUMBER.

#include <iostream>
using namespace std;

int smallestIndex(int arr[], int size) {

    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {

    int arr[] = {5, 9, 2, 8, 1, 7, 3};
    int size = 7;

    cout << "Smallest Index: " << smallestIndex(arr, size);

    return 0;
}

// FIND INDEX OF LARGEST NUMBER.


// WAF TO CALCULATE SUM & PRODUCT OFF ALL NUMBERS IN AN ARRAY.


// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY


// WAF TO PRINT ALL THE UNIQUE VALUE IN AN ARRAY


// WAF TO PRINT INTERSECTION OF 2 ARRAY