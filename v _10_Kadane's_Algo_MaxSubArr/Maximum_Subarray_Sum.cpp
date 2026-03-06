
// In Previous ( Sub Arrays ) There Are 0(n)^3 Time Complexity Now Will Will Apply Brute Force Approach.

// If one number is already in currentSum, then we won't calculate this number again. That's why we ill add end number to the currentSum.
// currentSum = curentSum + array[end] 


// BRUTE FORCE ALGORITHM ---->

        // #include <iostream>
        // #include <vector>

        // using namespace std;

        // int main() {

        //     int size = 5;
        //     int array[] = {1, 2, 3, 4, 5};

        //     int maximumSum = 0;

        //     for ( int start = 0; start< size; start++ ) {
        //         int currentSum = 0;
        //         for ( int end= start; end< size; end++ ) {
        //             currentSum += array[end];
        //             maximumSum = max ( maximumSum, currentSum );
        //         }
        //     }

        //     cout << "The Maximum Sub Array Sub Is : " << maximumSum << endl;

        //     return 0;
        // }



// KADANE'S ALGORITHM ( MOST OPTIMISED ) ---->


    // Kadane's algo says if one one number is negative then no need to add this number, insted of add 0 - so that sum won't negative.!

    // Apply one loop and add serially number in currentSum if sum goes to negative then reset it into 0..  Because - it will decrease currentSum

    // currentSUm = 0, 3, -1, 0, 5, 9, 8, 15, 7
    // maximumSum = 0, 3, 5, 9, 15


        #include <iostream>
        using namespace std;


        int main() {

            int n = 7;
            int array [] = { 3, -4, 5, 4, -1, 7, -8 };

            int currentSum = 0, maximumSum = 0;

            for ( int i= 0; i< n; i++ ) {
                currentSum += array[i];
                maximumSum = max ( maximumSum, currentSum );
                if( currentSum < 0 ) {
                    currentSum = 0;
                }
            }

            cout << "The Maximum Sum Of Sub Arrays Is : " << maximumSum << endl;

            return 0;
        }


