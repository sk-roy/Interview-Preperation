class Solution {
public:
    int dp[1002][1002];

    int recur(string& s, int ss, int ee) {
        if (ss >= ee) return dp[ss][ee] = 1;
        if (dp[ss][ee] != -1) return dp[ss][ee];

        dp[ss][ee] = (s[ss] == s[ee] and recur(s, ss + 1, ee - 1));

        return dp[ss][ee];
    }

    string longestPalindrome(string s) {
        int sz = s.size();
        string res = "";
        int ss, ee, maxLen = 0;

        for (int i = 0; i < sz; i++)
            for (int j = i; j < sz; j++)
                dp[i][j] = -1;

        for (int i = 0; i < sz; i++)
            for (int j = i; j < sz; j++)
                if (recur(s, i, j) == 1 and (maxLen < j - i + 1)){
                    maxLen = j - i + 1;
                    ss = i;
                    ee = j;
                }

        for (int i = ss; i <= ee; i++){
            res += s[i];
        }

        cout<<maxLen<<endl;
        return res;
    }
};
