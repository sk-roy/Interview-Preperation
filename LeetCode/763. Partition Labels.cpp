class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int lastIndex[30];

        for (int i = 0; i < s.size(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        int ss = 0, se = 0;
        for (int i = 0; i < s.size(); i++) {
            se = max(se, lastIndex[s[i] - 'a']);
            if (i == se) {
                ans.push_back(i - ss + 1);
                ss = i+1;
            }
        }
        return ans;
    }
};
