#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
    if(n == 0) return ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++) {
        int target = K - arr[i];
        int l = i + 1;
        int r = n - 1;
        while(l < r) {
            int sum = arr[l] + arr[r];
            if(sum == target) {
                ans.push_back({arr[i], arr[l], arr[r]});
                int low = arr[l], high = arr[r] ;
                while (l < r && arr[l] == low) l++ ;
                while (l < r && arr[r] == high) r-- ;
            } else if(sum < target) {
                l++;
            } else {
                r--;
            }
        }
        
        while(i < n - 1 && arr[i] == arr[i + 1]) i++;
    }
    
    return ans;
}
