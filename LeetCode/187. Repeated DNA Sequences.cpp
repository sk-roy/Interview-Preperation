class Solution {
public:
    int digit(char c) {
        switch (c) {
            case 'A': return 0;
            case 'C': return 1;
            case 'G': return 2;
            case 'T': return 3;
        }
        return 4;
    }

    string getS(string& s, int index) {
        string result = "";
        for (int i = 0; i < 10; i++, index--) {
            result = s[index] + result;
        }
        return result;
    }

    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map <int, int> dic;
        vector <string> result;
        string str;

        int val = 0;
        int mod = 262144;

        for (int i = 0; i < s.size(); i++) {
            val = val * 4 + digit(s[i]);

            if (i >= 9) {
                if (dic[val] == 1) {
                    result.push_back(getS(s, i));
                }

                dic[val]++;
                val = val % mod;
            }
        }

        return result;
    }
};
