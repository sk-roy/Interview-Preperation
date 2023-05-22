class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }

    void transpose(vector<vector<int>>& matrix) {
        int sz = matrix.size();
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz-i; j++) {
                swap(matrix[i][j], matrix[sz-j-1][sz-i-1]);
            }
        }
    }

    void reverse(vector<vector<int>>& matrix) {
        for (int i = 0, j = matrix.size() - 1; i < j; i++, j--) {
            swap(matrix[i], matrix[j]);
        }
    }
};
