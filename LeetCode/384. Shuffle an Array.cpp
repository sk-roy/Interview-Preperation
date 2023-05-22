class Solution {
public:
    vector<int> ini, array;

    Solution(vector<int>& nums) {
        ini = nums;
        array = nums;
    }

    vector<int> reset() {
        return ini;
    }

    vector<int> shuffle() {
        int i = rand() % array.size();
        swap(array[i], array[0]);
        return array;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
