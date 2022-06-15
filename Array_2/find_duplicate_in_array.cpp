#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    unordered_map<int, int> mp;
    int ans = -1;
    
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
        if(mp[arr[i]] > 1) {
            ans = arr[i];
        }
    }
    
    return ans;
}
