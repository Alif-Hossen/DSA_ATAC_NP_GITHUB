#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minimumArraySum(vector<int>& nums) {

    // array এর minimum value বের করি
    int mn = *min_element(nums.begin(), nums.end());

    long long sum = 0;

    for (int i = 0; i < nums.size(); i++) {

        // যদি minimum দিয়ে divisible হয়
        // তাহলে এটাকে minimum বানানো যাবে
        if (nums[i] % mn == 0) {
            sum += mn;
        }
        else {
            // না হলে same থাকবে
            sum += nums[i];
        }
    }

    return sum;
}

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long ans = minimumArraySum(nums);

    cout << "Minimum Possible Sum = " << ans << endl;

    return 0;
}