#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mx = 0, currMax = INT_MAX, min = prices[0];
    for(int i : prices) {
        if(i < min) min = i;
        currMax = i - min;
        mx = max(mx, currMax);
    }
    return mx;
}
