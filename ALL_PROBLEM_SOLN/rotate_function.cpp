class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {

        int arrayLength = nums.size();

        long long totalArraySum = 0;
        long long currentRotationValue = 0;

        for (int i = 0; i < arrayLength; i++) {
            totalArraySum += nums[i];

            currentRotationValue += (long long)i * nums[i];
        }

        long long maximumRotationValue = currentRotationValue;

        for (int i = 1; i < arrayLength; i++) {
            int movedElement = nums[arrayLength - i];

            currentRotationValue = currentRotationValue + totalArraySum -
                                   (long long)arrayLength * movedElement;
            maximumRotationValue = max(maximumRotationValue, currentRotationValue);
        }
        return maximumRotationValue;
    }
};