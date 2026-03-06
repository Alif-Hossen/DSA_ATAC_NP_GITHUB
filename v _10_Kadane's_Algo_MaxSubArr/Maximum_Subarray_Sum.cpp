
// In Previous ( Sub Arrays ) There Are 0(n)^3 Time Complexity Now Will Will Apply Brute Force Approach.

// If one number is already in currentSum, then we won't calculate this number again. That's why we ill add end number to the currentSum.
// currentSum = curentSum + array[end] 


// BRUTE FORCE ALGORITHM ---->

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int size = 5;
    int array[] = {1, 2, 3, 4, 5};

    int maximumSum = 0;

    for ( int start = 0; start< size; start++ ) {
        int currentSum = 0;
        for ( int end= start; end< size; end++ ) {
            currentSum += array[end];
            maximumSum = max ( maximumSum, currentSum );
        }
    }

    cout << "The Maximum Sub Array Sub Is : " << maximumSum << endl;

    return 0;
}