class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = nums[0], b;
        bool gotB = false;

        for (auto num: nums) {
            if (num <= a) {
                a = num;
            } else if (!gotB || num < b) {
                b = num;
                gotB = true;
            } else if (gotB && num > b){
                return true;
            }
        }

        return false;
    }
};
