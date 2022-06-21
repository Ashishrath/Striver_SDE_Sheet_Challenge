#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

    int n = arr.size(), sum = 0, best = 0, len;
    
    for(int i = 0; i < n; i++) {
        sum = 0;
        len = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j]; 
            if(sum == 0) {
                len = j - i + 1;
            }
        }
        best = max(best, len);
    }
    
    return best;
}
