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

            // #include <iostream>
            // using namespace std;

            // int indexLargestNumber( int arr[], int sz ) {
            //     int maximumIndex = 0;
            //     for( int i =0; i< sz; i++ ) {
            //         if( arr[i] > arr[maximumIndex] ) {
            //             maximumIndex = i;
            //         }
            //     }
            //     return maximumIndex;
            // }

            // int main() {

            //     int size;
            //     cout << "Enter Array Size : ";
            //     cin >> size;
            //     int array[size];

            //     for ( int i= 0; i< size; i++ ) {
            //         cin >> array[i];
            //     }

            //     cout << "The Array Is : " << endl;
            //     for( int i= 0; i< size; i++) {
            //         cout << array[i] << " " << endl;
            //     }

            //     int index = indexLargestNumber( array, size );
            //     cout << "The Maximum Number Is : " << array[index] << endl;
            //     cout << "The Maximum Number's Index Is : " << index << endl;

            //     return 0;
            // }


// WAF TO CALCULATE SUM & PRODUCT OFF ALL NUMBERS IN AN ARRAY.

            // #include <iostream>
            // using namespace std;

            // int sumAllNumber ( int arr[], int sz ) {
            //     int sum = 0;
            //     for ( int i= 0; i< sz; i++) {
            //         sum += arr[i];
            //     }
            //     return sum;
            // }
            // int productAllNumber ( int arr[], int sz ) {
            //     int sum = 1;
            //     for ( int i= 0; i< sz; i++) {
            //         sum *= arr[i];
            //     }
            //     return sum;
            // }

            // int main() {

            //     int size;
            //     cout << "Enter The Size : ";
            //     cin >> size;
            //     int array[size];

            //     for( int i= 0; i< size; i++ ) {
            //         cin >> array[i];
            //     }

            //     cout << "The Array Is : " ;
            //     for ( int i= 0; i< size; i++ ) {
            //         cout << array[i] << " ";
            //     } 
            //     cout << endl;

            //     cout << "The Sum Of All The Numbers In This Array Is : " << sumAllNumber( array, size ) << endl;
            //     cout << "The Product Of All The Numbers In This Array Is : " << productAllNumber( array, size ) << endl;

            //     return 0;
            // }

// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY

#include <iostream>
#include <climits>
using namespace std;

int maximumNumber ( int arr[], int size ) {
    int max = INT_MIN;
    for( int i= 0; i< size; i++ ) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int minimumNumber ( int arr[], int size ) {
    int min = INT_MAX;
    for( int i= 0; i< size; i++ ) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {

    int array[] = { 2, 43, 60, -234, 93, -56, 234, -2, -3432 };
    int size = sizeof(array) / sizeof(array[0]) ;

    int max = maximumNumber( array, size );
    int min = minimumNumber( array, size );

    cout << "Before Swapping : " << endl;
    cout << "Maximum Number Is : " << max << endl;
    cout << "Minimum Number Is : " << min << endl;

    swap(max, min);

    cout << "After Swapping : " << endl;
    cout << "Maximum Number Is : " << max << endl;
    cout << "Minimum Number Is : " << min << endl;

    return 0;
}


// WAF TO PRINT ALL THE UNIQUE VALUE IN AN ARRAY


// WAF TO PRINT INTERSECTION OF 2 ARRAY