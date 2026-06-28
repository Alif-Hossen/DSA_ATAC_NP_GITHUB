class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        
        vector<int> ans;

        for( int v : nums ) {
            int n = ans.size();

            if(n < k || ans[n-k] != v) {
                ans.push_back(v);
            }
        }
        return ans;

    }
};