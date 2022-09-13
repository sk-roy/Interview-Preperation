
class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        if (a[0] == b[0])
            return a[1] < b[1];
        else
            return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort (intervals.begin(), intervals.end(), compare);
        vector<vector<int>> vv;
        int s = intervals[0][0], e = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (e < intervals[i][0]) {
                vv.push_back({s, e});
                s = intervals[i][0];
                e = intervals[i][1];
            } else {
                e = max(e, intervals[i][1]);
            }
        }
        vv.push_back({s, e});

        return vv;
    }
};
