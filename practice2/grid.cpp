#include <bits/stdc++.h>
using namespace std;
const int rows=3;
const int cols=3;
int ans[rows][cols] = {{4, 9, 7}, {3, 8, 5}, {1, 2, 6}};

int dp(int row, int col) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            ans[i][j]=-1;
        }
    }

    if (row == 0 && col == 0) {
        return 1;
    }

    if (ans[row][col] != -1) {return ans[row][col];}

    int curr = 0;
    if (row >0) {
        curr += dp(row-1, col);
    }

    if (col > 0) {
        curr += dp(row, col-1);
    }

    ans[row][col] = curr;
    return curr;
}

int iter() {
    if (rows == 0 && cols == 0) {
        return 1;
    }

    int grid[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            grid[i][j] = 0;
        }
    }
    grid[0][0] = 1;
    for (int i = 0 ; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i+1 < rows) {
                grid[i+1][j] += grid[i][j];
            }

            if (j+1 < cols) {
                grid[i][j+1] += grid[i][j];
            }
        }
    }

    return grid[rows-1][cols-1];

}

int dp2(int row, int col) {
    if (row == 0 && col == 0) {
        return ans[0][0];
    }
    


}

int main() {
    cout << dp2(2, 2) << endl;
    return 0;
}