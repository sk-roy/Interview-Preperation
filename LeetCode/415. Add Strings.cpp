class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum = "";
        int carry = 0;

        for (int i = num1.size()-1, j = num2.size()-1; i >= 0 || j >= 0; i--, j--) {
            if (i >= 0) carry += int(num1[i] - '0');
            if (j >= 0) carry += int(num2[j] - '0');

            sum = char((carry % 10) + '0') + sum;
            carry /= 10;
        }

        if (carry > 0)
            sum = char(carry + '0') + sum;

        return sum;
    }
};
