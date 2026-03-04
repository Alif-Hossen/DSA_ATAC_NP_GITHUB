#include <iostream>
#include <climits>
using namespace std;

int main () {

    int nums[] = { 5, 15, 22, 1, -15, 24 };
    int size = sizeof( nums ) / sizeof( nums[1] );

    // cout << size;
    int smallestNumber = INT_MIN;

    for ( int i = 0; i < size; i++ ) {
        // if( nums[i] > smallestNumber ) {
        //     smallestNumber = nums[i];
        // }

        // OR 

        smallestNumber = max(nums[i], smallestNumber);
    }

    cout << "The Smallest Number Is : " << smallestNumber << endl ;

    return 0;
}