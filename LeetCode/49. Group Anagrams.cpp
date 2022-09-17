class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector < pair <string, int> > vp;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            vp.push_back({s, i});
        }
        sort(vp.begin(), vp.end());

        vector<vector<string>> ans;
        vector<string> vs = {strs[vp[0].second]};

        for (int i = 1; i < vp.size(); i++) {
            if (vp[i-1].first != vp[i].first) {
                ans.push_back(vs);
                vs.clear();
            }
            vs.push_back(strs[vp[i].second]);
        }

        if (!vs.empty()) {
            ans.push_back(vs);
        }

        return ans;
    }
};
