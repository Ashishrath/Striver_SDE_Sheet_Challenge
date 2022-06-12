#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, best = 0;
    
    for(int i = 0; i < n; i++) {
        sum = (arr[i] > (sum + arr[i]))?arr[i]:sum+arr[i];    // maximum of current element and previous sum + current element.
        best = (sum > best)?sum:best;    // maximum of sum and best.
    }
    
    return best;
}
