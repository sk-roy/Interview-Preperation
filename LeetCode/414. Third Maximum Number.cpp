class Solution
{
public:
    static bool comp(int a, int b) { return a > b; }

    int thirdMax(vector<int> &nums)
    {

        bool got1 = false;
        bool got2 = false;
        bool got3 = false;
        int maxi1, maxi2, maxi3;

        for (auto num : nums)
        {
            if (got1)
                maxi1 = max(maxi1, num);
            else
            {
                maxi1 = num;
                got1 = true;
            }
        }

        for (auto num : nums)
        {
            if (num != maxi1)
            {
                if (got2)
                    maxi2 = max(maxi2, num);
                else
                {
                    maxi2 = num;
                    got2 = true;
                }
            }
        }
        for (auto num : nums)
        {
            if (num != maxi1 and num != maxi2)
            {
                if (got3)
                    maxi3 = max(maxi3, num);
                else
                {
                    maxi3 = num;
                    got3 = true;
                }
            }
        }
        // cout<<INT_MIN<<endl;

        if (got3)
            return maxi3;
        else
            return maxi1;
    }
};