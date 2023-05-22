class Solution {
public:

    int longestPalindrome(string s) {
        map <char, int> mp;
        set <char> st;

        for (auto c: s){
            mp[c]++;
            st.insert(c);
        }

        int odd = 0;

        for (auto c: st){
            if (mp[c] % 2){
                odd++;
            }
        }

        return s.size() - max(0, odd-1);
    }
};
