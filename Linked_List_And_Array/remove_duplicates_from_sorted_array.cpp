#include<bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
  arr.erase(unique(arr.begin(), arr.end()), arr.end());
  return arr.size();
}
