class Solution
{
public:
    static bool comp(int a, int b) { return a > b; }

    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), comp);
        int count = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
            {
                count++;
                if (count == 3)
                    return nums[i];
            }
        }
        return nums[0];
    }
};