class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0, candidate;
        for (auto num: nums) {
            if (vote == 0) {
                candidate = num;
                vote++;
            } else {
                if (candidate == num)
                    vote++;
                else
                    vote--;
            }
        }
        vote = 0;
        for (auto num: nums) {
            if (candidate == num)
                vote++;
        }

        if (vote > nums.size() / 2)
            return candidate;
        else
            return -1;
    }
};
