string longestCommonPrefix(vector<string> &arr, int n)
{
    for(int i = 0; i < arr[0].size(); i++) {
        for(int j = 1; j < n; j++) {
            if(arr[j].size() == i || arr[j][i] != arr[0][i]) {
                return arr[0].substr(0, i);
            }
        }
    }
    return arr[0];
}


