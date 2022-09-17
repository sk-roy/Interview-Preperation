class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> vs;
        map <char, string> mp;
        map <string, char> mp2;
        string word = "";

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                vs.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        if (vs.size() != pattern.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size() && i < vs.size(); i++) {
            if (mp.find(pattern[i]) != mp.end()) {
                if(mp[pattern[i]] != vs[i]) {
                    return false;
                }
            } else {
                mp[pattern[i]] = vs[i];
            }
        }

        for (int i = 0; i < vs.size() && i < pattern.size(); i++) {
            if (mp2.find(vs[i]) != mp2.end()) {
                if (mp2[vs[i]] != pattern[i]) {
                    return false;
                }
            } else {
                mp2[vs[i]] = pattern[i];
            }
        }

        return true;
    }
};
