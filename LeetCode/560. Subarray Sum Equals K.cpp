class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int counter = 0;
        vector <int> sm = nums;

        for (int i = 1; i < sm.size(); i++) {
            sm[i] += sm[i-1];
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                sum = sm[j];
                if (i != 0) {
                    sum -= sm[i-1];
                }

                if (sum == k) {
                    counter++;
                }
            }
        }

        return counter;
    }
};
