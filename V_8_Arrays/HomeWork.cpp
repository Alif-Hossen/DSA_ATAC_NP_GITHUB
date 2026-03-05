// FIND INDEX OF SMALLEST NUMBER.

            // #include <iostream>
            // using namespace std;

            // int smallestIndex(int arr[], int size) {

            //     int minIndex = 0;

            //     for (int i = 1; i < size; i++) {
            //         if (arr[i] < arr[minIndex]) {
            //             minIndex = i;
            //         }
            //     }

            //     return minIndex;
            // }

            // int main() {

            //     int arr[] = {5, 9, 2, 8, 1, 7, 3};
            //     int size = 7;

            //     cout << "Smallest Index: " << smallestIndex(arr, size);

            //     return 0;
            // }

// FIND INDEX OF LARGEST NUMBER.

#include <iostream>
using namespace std;

int indexLargestNumber( int arr[], int sz ) {
    int maximumIndex = 0;
    for( int i =0; i< sz; i++ ) {
        if( arr[i] > arr[maximumIndex] ) {
            maximumIndex = i;
        }
    }
    return maximumIndex;
}

int main() {

    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int array[size];

    for ( int i= 0; i< size; i++ ) {
        cin >> array[i];
    }

    cout << "The Array Is : " << endl;
    for( int i= 0; i< size; i++) {
        cout << array[i] << " " << endl;
    }

    int index = indexLargestNumber( array, size );
    cout << "The Maximum Number Is : " << array[index] << endl;
    cout << "The Maximum Number's Index Is : " << index << endl;

    return 0;
}


// WAF TO CALCULATE SUM & PRODUCT OFF ALL NUMBERS IN AN ARRAY.


// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY


// WAF TO PRINT ALL THE UNIQUE VALUE IN AN ARRAY


// WAF TO PRINT INTERSECTION OF 2 ARRAY