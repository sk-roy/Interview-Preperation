class Solution {
public:
    long long numberOfWays(string s) {
        int N = s.size();
        long long one[N], zero[N];
        long long oneS[N], zeroS[N];

        one[N-1] = 0, zero[N-1] = 0, oneS[N-1] = 0, zeroS[N-1] = 0;

        for (int i = N-2; i >= 0; i--) {
            if (s[i+1] == '0') {
                zero[i] = zero[i+1] + 1;
                one[i] = one[i+1];
                zeroS[i] = zeroS[i+1] + one[i];
                oneS[i] = oneS[i+1];
            } else {
                zero[i] = zero[i+1];
                one[i] = one[i+1] + 1;
                zeroS[i] = zeroS[i+1];
                oneS[i] = oneS[i+1] + zero[i];
            }
        }

        long long sum = 0;

        for (int i = 0; i < N - 2; i++) {
            if (s[i] == '0') {
                sum += oneS[i];
            } else {
                sum += zeroS[i];
            }
        }

        return sum;
    }
};
