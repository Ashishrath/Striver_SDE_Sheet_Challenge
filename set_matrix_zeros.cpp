#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int r = matrix.size();
    int c = matrix[0].size();
    
    vector<int> dummyRow(r, -1);
    vector<int> dummyCol(c, -1);
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(matrix[i][j] == 0) {
                dummyRow[i] = 0;
                dummyCol[j] = 0;
            }
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(dummyRow[i] == 0 || dummyCol[j] == 0) matrix[i][j] = 0;
        }
    }
}
