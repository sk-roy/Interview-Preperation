class Solution {
public:

    string addition(string num1, string num2) {
        string res = "";
        int hand = 0;

        int i = num1.size()-1;
        int j = num2.size()-1;

        while(i >= 0 or j >= 0) {
            if (i >= 0) hand += int(num1[i] - '0');
            if (j >= 0) hand += int(num2[j] - '0');
            i--, j--;

            res = char((hand % 10) + '0') + res;
            hand /= 10;
        }

        while (hand) {
            res = char((hand % 10) + '0') + res;
            hand /= 10;
        }

        return res;
    }

    string multiplyByDigit(string num, int d) {
        string res = "";
        int hand = 0;

        int i = num.size()-1;

        while(i >= 0) {
            if (i >= 0) hand += int(num[i] - '0') * d;
            i--;

            res = char((hand % 10) + '0') + res;
            hand /= 10;
        }

        while (hand) {
            res = char((hand % 10) + '0') + res;
            hand /= 10;
        }

        return res;
    }

    string appendZero(int n) {
        string s = "";
        while(n) {
            s += '0';
            n--;
        }
        return s;
    }

    void rLeadingZ(string& num) {
        while (num.size() > 1 and num[0] == '0') {
            num.erase(0, 1);
        }
    }

    string multiply(string num1, string num2) {
        string res = "";
        string add = "";

        for (int i = 0; i < num2.size(); i++) {
            res = addition(res, multiplyByDigit(num1, num2[i] - '0') + appendZero(num2.size() - i - 1));
        }

        rLeadingZ(res);

        return res;
    }
};
