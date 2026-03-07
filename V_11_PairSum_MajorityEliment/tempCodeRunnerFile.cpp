            // #include <iostream>
            // #include <vector>
            // #include <algorithm>
            // using namespace std;

            // int majorityElements ( vector<int>& arr ) {
            //     int n = arr.size(); 

            //     // sort ->
            //     sort(arr.begin(), arr.end());

            //     // frequency cout ->
            //     int frequency = 1, answer = arr[0];
            //     for( int i= 1; i< n ; i++ ) {
            //         if( arr[i] == arr[i-1]) {
            //             frequency ++;
            //         } else {
            //             frequency = 1;
            //             answer = arr[i];
            //         }
            //         if( frequency > n/2 ) {
            //             return answer;
            //         }
            //     }
                
            //     return answer;
            // }

            // int main() {

            //     vector<int> array = { 2, 2, 1, 1, 1, 2, 2 };
            //     cout << "Majority Element Is : " << majorityElements ( array );
            //     return 0;
            // }