class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int counter = 0;
        unordered_map <int, int> mp;
        mp[sum] = 1;

        for (auto num: nums) {
            sum += num;
            int diff = sum - k;

            if (mp.find(diff) != mp.end()) {
                counter += mp[diff];
            }

            mp[sum]++;
        }

        return counter;
    }
};
