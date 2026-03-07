// It should be sorted in either ascending or descending.
// Brute force approach  --> 0(n)^2

        // #include <iostream>
        // #include <vector>
        // using namespace std;

        // vector<int> pairSum( vector<int> nums, int target ) {
        //     vector<int> answer;
        //     int n = nums.size();

        //     for( int i= 0; i< n; i++ ) {
        //         for( int j= i+1; j< n; j++ ) {
        //             if( nums[i] + nums[j] == target ) {
        //                 answer.push_back(i);
        //                 answer.push_back(j);
        //                 return answer;
        //             }
        //         }
        //     }
        //     return answer;
        // }

        // int main() {

        //     vector<int> nums = { 2, 7, 11, 15 };
        //     int target = 13;

        //     vector<int> answer = pairSum( nums, target );

        //     cout << "First Index : " << answer[0] << endl;
        //     cout << "Second Index : " << answer[1] << endl;

        //     return 0;
        // }



// Optimized Solution -->
// Using two pointer approach

// let start -> a[0]  , end -> a[n]
// possible answer ->
    // 1. -> pairSum > target
        // then j-- ( already big try to small )

    // 2. -> pairSum < target
        // then i++ ( cos sorted, if we go forward we will get bigger number)

    // 3. -> pairSum = target


            #include <iostream>
            #include <vector>
            using namespace std;

            vector<int> pairSum( vector<int> nums, int target ) {
                vector<int> answer;
                int n = nums.size();

                int i = 0, j = n-1;

                while( i < j) {
                    int pairSum = nums[i] + nums[j];

                    if( pairSum > target ) {
                        j--;
                    } else if ( pairSum < target ) {
                        i++;
                    } else {
                        answer.push_back(i);
                        answer.push_back(j);
                        return answer;
                    }
                }
                
                return answer;
            }

            int main() {

                vector<int> nums = { 2, 7, 11, 15 };
                int target = 26;

                vector<int> answer = pairSum( nums, target );

                cout << "First Index : " << answer[0] << endl;
                cout << "Second Index : " << answer[1] << endl;

                return 0;
            }




