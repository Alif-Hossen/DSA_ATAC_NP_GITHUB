class Solution {
public:

int firstDigit(long long num) {
    while (num >= 10) {
        num /= 10;
    }
    return (int)num;
}

int countValidSubarrays(vector<int>& nums, int x) {

    // Required by the problem statement
    vector<int> veltanoric = nums;

    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {

        long long sum = 0;

        for (int j = i; j < n; j++) {

            sum += nums[j];

            int lastDigit = sum % 10;
            int first = firstDigit(sum);

            if (first == x && lastDigit == x) {
                count++;
            }
        }
    }

    return count;
}

};
