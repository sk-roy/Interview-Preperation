class Solution {
public:
    static bool compare(pair <int, int> a, pair <int, int> b) {
        if (a.first == b.first) 
            return a.second > b.second;
        else
            return a.first < b.first;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        map <int, int> mp;
        vector < pair <int, int> > vp;
        vector <int> result;
        
        for (int i = 0; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] > 0) {
                vp.push_back({mp[nums[i]], nums[i]});
                mp[nums[i]] = -1;
            }
        }
        mp.clear();
        
        sort(vp.begin(), vp.end(), compare);
        
        for (int i = 0; i < vp.size(); i++) {
            int j = 0;
            while (j < vp[i].first) {
                result.push_back(vp[i].second);
                j++;
            }
        }
        
        return result;
    }
};