class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        for (int i = s; i <= e; i++) {
            if (nums[i] == 2) {
                while(nums[e] == 2 and e > i)
                    e--;
                swap(nums[i], nums[e]);
            }
            if (nums[i] == 0) {
                while(nums[s] == 0 and s < i)
                    s++;
                swap(nums[i], nums[s]);
            }
        }
    }
};
