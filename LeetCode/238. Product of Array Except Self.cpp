class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        int leftProduct[sz], rightProduct[sz];
        leftProduct[0] = 1;
        rightProduct[sz-1] = 1;

        for (int i = 1; i < sz; i++) {
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
        }

        for (int i = sz-2; i >= 0; i--) {
            rightProduct[i] = rightProduct[i+1] * nums[i+1];
        }

        vector <int> answer;

        for (int i = 0; i < sz; i++) {
            if (i == 0) {
                answer.push_back(rightProduct[i]);
            } else if (i+1 == sz) {
                answer.push_back(leftProduct[i]);
            } else {
                answer.push_back(leftProduct[i] * rightProduct[i]);
            }
        }

        return answer;
    }
};
