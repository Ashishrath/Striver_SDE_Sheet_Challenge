#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    for(int i = 0; i < min((n/2), (m/2)); i++) {
        int currElement = mat[i][i];
        
        for(int j = i + 1; j < m - i; j++) {
            int temp = mat[i][j];
            mat[i][j] = currElement;
            currElement = temp;
        }
        
        for(int j = i + 1; j < n - i; j++) {
            int temp = mat[j][m - i - 1];
            mat[j][m - i - 1] = currElement;
            currElement = temp;
        }
        
        for(int j = m - i - 2; j >= i; j--) {
            int temp = mat[n - i - 1][j];
            mat[n - i - 1][j] = currElement;
            currElement = temp;
        }
        
        for(int j = n - i - 2; j > i; j--) {
            int temp = mat[j][i];
            mat[j][i] = currElement;
            currElement = temp;
        }
        
        mat[i][i] = currElement;
    }
}
