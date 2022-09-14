class Solution {
public:
    void printMatrix(vector<vector<int>>& m) {
        cout<<"-------- Matrix -------"<<endl;
        for (auto vc: m) {
            for (auto cell: vc) {
                cout<<cell<<" ";
            }
            cout<<endl;
        }
    }

    vector<vector<int>> generateMatrix(int n) {
        int dir = 0;
        int dx[] = {0, 1,  0, -1};
        int dy[] = {1, 0, -1,  0};
        vector<vector<int>> matrix(n, vector<int> (n, 0));

        int tx, ty, x = 0, y = 0;
        int value = 1;

        while(value <= n*n) {
            if (x < 0 || x >= n || y < 0 || y >= n || matrix[x][y] != 0) {
                break;
            }

            matrix[x][y] = value++;
            tx = x + dx[dir];
            ty = y + dy[dir];

            if (tx < 0 or tx >= n or ty < 0 or ty >= n or matrix[tx][ty] != 0) {
                dir = (dir + 1) % 4;
            }

            x += dx[dir];
            y += dy[dir];

            // printMatrix(matrix);
        }

        return matrix;
    }
};
