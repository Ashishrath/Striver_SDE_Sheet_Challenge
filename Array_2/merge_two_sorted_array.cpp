#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    /* TLE in this approach 72 TC passed out of 80.
    int p1 = 0, p2 = 0;
    
    for(int i = 0; i < m; i++) {
        if(arr1[p1] > arr2[p2]) {
            swap(arr1[p1], arr2[p2]);
        }
        p1++;
        sort(arr2.begin(), arr2.end());
    }
    for(int j = 0; j < n; j++) {
        arr1[p1 + j] = arr2[p2++];
    }
    
    return arr1;*/
    
    for(int i = 0; i < n; i++) {
        arr1[m+i] = arr2[i];
    }
    
    sort(arr1.begin(), arr1.end());
    
    return arr1;
}
