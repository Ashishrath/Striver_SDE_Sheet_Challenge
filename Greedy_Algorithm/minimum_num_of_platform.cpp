int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at + n);
    sort(dt, dt + n);
    
    int i = 1, j = 0, platform = 1, mx = 1;
    
    while(i<n && j<n) {
        if(at[i] <= dt[j]) {
            i++;
            platform++;
        } else {
            j++;
            platform--;
        }
        mx = max(platform, mx);
    }
    
    return mx;
}
