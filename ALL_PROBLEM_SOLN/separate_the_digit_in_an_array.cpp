class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        stack<int> s;
        vector<int> result;
        
        for(int i = nums.size() - 1; i >= 0; i--) {
            int currentNum = nums[i];

            while(currentNum > 0) {
                int lastDigit = currentNum % 10;
                s.push(lastDigit);
                // s.push(lastDigit % 10);
                currentNum /= 10;
            }
        }

        while(!s.empty()) {
            result.push_back(s.top());
            s.pop();
        }
        return result;
        
    }
    
};