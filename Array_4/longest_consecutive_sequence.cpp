#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    int count = 1, best = 1;
    
    for(int i = 1; i < n; i++) {
        if(arr[i-1] == arr[i]) continue;
        if((arr[i-1]+1) == arr[i]) {
            count++;
        } else {
            count = 1;
        }
        best = max(count, best);
    }
    
    return best;
}
