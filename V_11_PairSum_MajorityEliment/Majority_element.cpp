// Majority element should be appears greater than n/2 ( floor ) time.



//BRUTE FORCE APPROACH --> 0(n)^2


        #include <iostream>
        #include <vector>
        using namespace std;

        int majorityElements ( vector<int>& arr ) {
            int n = arr.size(); 

            for( int value : arr ) {
                int frequency = 0;

                for( int element : arr ) {
                    if( element == value ) {
                        frequency ++ ;
                    }
                }
                if( frequency > n/2 ) {
                    return value;
                }
            }
            return -1;
        }

        int main() {

            vector<int> array = { 2, 2, 1, 1, 1, 2, 2 };
            cout << "Majority Element Is : " << majorityElements ( array );
            return 0;
        }



// OPTIMIZED APPROACH --> 0(nlogn)
    // 1. Sort --> 0(nlogn)
    // 2. Loop --> 0(n)


            #include <iostream>
            #include <vector>
            #include <algorithm>
            using namespace std;

            int majorityElements ( vector<int>& arr ) {
                int n = arr.size(); 

                // sort ->
                sort(arr.begin(), arr.end());

                // frequency cout ->
                int frequency = 1, answer = arr[0];
                for( int i= 1; i< n ; i++ ) {
                    if( arr[i] == arr[i-1]) {
                        frequency ++;
                    } else {
                        frequency = 1;
                        answer = arr[i];
                    }
                    if( frequency > n/2 ) {
                        return answer;
                    }
                }
                
                return answer;
            }

            int main() {

                vector<int> array = { 2, 2, 1, 1, 1, 2, 2 };
                cout << "Majority Element Is : " << majorityElements ( array );
                return 0;
            }




// MOOR'S VOTING ALGORITHM --> 0(n) --> THE LAST VALUE OF ANSWER WILL BE MAJORITY ELEMENT THAT'S 100% TRUE..!

    // Assume frequency as power 
    // No need to sort 
    // Same element -> frequency ++
    // Different element -> frequency --


            #include <iostream>
            #include <vector>
            using namespace std;

            int majorityElements ( vector<int>& arr ) {
                int n = arr.size();
                int frequency = 0, answer = 0;

                for( int i= 0; i< n; i++ ) {
                    if( frequency == 0 ) {
                        answer = arr[i];
                    }
                    if(answer == arr[i]) {
                        frequency ++;
                    } else {
                        frequency --;
                    } 
                }

                return answer;
            }

            int main() {

                vector<int> array = { 2, 2, 1, 1, 1, 2, 2 };
                cout << "Majority Element Is : " << majorityElements ( array );
                return 0;
            }












