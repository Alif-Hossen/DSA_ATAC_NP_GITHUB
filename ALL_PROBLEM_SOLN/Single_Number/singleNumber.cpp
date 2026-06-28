class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for( int value : nums ) {
            sum ^= value;
        }
        return sum;
        
    }
};