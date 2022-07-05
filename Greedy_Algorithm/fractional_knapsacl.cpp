#include <bits/stdc++.h>
static bool myCmp(pair<int,int> &a, pair<int, int> &b) {
    return (double)a.second/a.first > (double)b.second/b.first;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double ans = 0.0;
    sort(items.begin(), items.end(), myCmp);
    
    for(int i = 0; i < items.size(); i++) {
        if(w >= items[i].first) {
            ans += items[i].second;
            w -= items[i].first;
        } else {
            double v = (items[i].second*1.0)/items[i].first;
            ans += (w * v);
            w = 0;
        }
    }
    
    return ans;
}
