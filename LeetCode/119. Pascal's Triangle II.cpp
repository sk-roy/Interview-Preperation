class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector <int> pascal(rowIndex);

        for (int i = 0; i < rowIndex; i++) {
            pascal[i] = 0;
        }

        pascal[0] = 1;

        for (int i = 1; i < rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                pascal[j] += pascal[j-1];
            }
        }

        return pascal;
    }
};
