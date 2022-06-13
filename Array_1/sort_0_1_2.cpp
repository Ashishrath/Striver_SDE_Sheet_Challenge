#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int p1 = 0, p2 = n - 1, i = 0;
    
    while(i <= p2) {
        if(arr[i] == 0) {
            swap(arr[i], arr[p1]);
            p1++;
            i++;
        }
        else if(arr[i] == 2) {
            swap(arr[i], arr[p2]);
            p2--;
        } 
        else {
            i++;
        }
    }
}
