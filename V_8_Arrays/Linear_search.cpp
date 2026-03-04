#include <iostream>
#include <climits>
using namespace std;

int linearSearch( int arr[], int sz ) {
    int target = 1;
    
    for ( int i = 0; i < sz; i++ ) {
        if ( arr[i] == target ) {
            return i;
        }
    }
}

int main () {

    int nums[] = { 5, 15, 22, 1, -15, 24 };
    int size = sizeof( nums ) / sizeof( nums[1] );

    cout << "The Searching Number's Index Is : " << linearSearch( nums, size )  << endl ;

    return 0;
}