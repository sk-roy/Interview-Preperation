class Solution {
public:

    vector<int> pre(int a, int b, int c) {
        if (c < a) return {c, a, b};
        if (c > b) return {a, b, c};
        return {a, c, b};
    }

    vector<vector<int>> threeSum(vector<int>& nums2) {
        map <int, int> index;
        set <vector<int>> sv;
        vector<vector<int>> result;
        vector<int> nums;
        map <int, int> frq;


        for (auto num: nums2) {
            if (frq[num] <= 1) {
                nums.push_back(num);
            }
            frq[num]++;
        }
        if (frq[0] >= 3) {
            result.push_back({0, 0, 0});
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            index[nums[i]] = i+1;
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                int indx = index[-sum];

                if (indx > 0 and indx != i+1 and indx != j+1) {
                    sv.insert(pre(nums[i], nums[j], -sum));
                }
            }
        }

        for (auto st: sv) {
            result.push_back(st);
        }

        return result;
    }
};
