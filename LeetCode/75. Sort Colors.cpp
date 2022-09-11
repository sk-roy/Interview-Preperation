class Solution {
public:
    void sortColors(vector<int>& nums) {
        int frq[] = {0, 0, 0};

        for (int i = 0; i < nums.size(); i++) {
            frq[nums[i]]++;
            nums[i] = 1;
        }

        for (int i = 0; i < frq[0]; i++)
            nums[i] = 0;

        for (int j = nums.size()-1, i = 0; i < frq[2]; i++)
            nums[j-i] = 2;
    }
};
