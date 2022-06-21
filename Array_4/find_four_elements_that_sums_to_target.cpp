#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int newTarget = target - arr[i] - arr[j];
            int l = j + 1, r = n - 1;
            while(l < r) {
                int sum = arr[l] + arr[r];
                if(sum == newTarget) return "Yes";
                else if(sum < newTarget) l++;
                else r--;
            }
        }
    }
    
    return "No";
}
