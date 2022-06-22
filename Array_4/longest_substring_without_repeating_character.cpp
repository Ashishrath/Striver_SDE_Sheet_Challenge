#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    unordered_map<int, int> mp;
    int n = input.size(), len = 0, best = 0, l = 0, r = 0;
    
    for(int i = 0; i < n; i++) {
        mp[input[i]]++;
        if(mp[input[i]] > 1) {
            while(mp[input[i]] > 1) {
                mp[input[l]]--;
                l++;
            }
        }
        len = r - l + 1;
        best = max(best, len);
        r++;
    }
    
    return best;
}
