class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int N  = rowIndex + 2;
        int nCr[N][N];

        for (int i = 0; i < N; i++) {
            nCr[i][0] = 1;
            nCr[i][i] = 1;
        }

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = 1; j < i; j++) {
                nCr[i][j] = nCr[i-1][j-1] + nCr[i-1][j];
            }
        }

        vector <int> v;
        for (int i = 0; i <= rowIndex; i++) {
            v.push_back(nCr[rowIndex][i]);
        }

        return v;
    }
};
