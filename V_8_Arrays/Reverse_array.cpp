#include <iostream>
#include <climits>
using namespace std;

void reverseArray( int arr[], int sz ) {
    
    int start = 0;
    int end = sz-1;

    while( start < end ) {
        swap( arr[start], arr[end] );
        start++;
        end--;
    }
}

int main () {

    int nums[] = { 5, 15, 22, 1, -15, 24 };
    int size = sizeof( nums ) / sizeof( nums[1] );

    reverseArray( nums, size );
    for( int i = 0; i < size; i++ ) {
        cout << nums[i] << " ";
    }

    return 0;
}
