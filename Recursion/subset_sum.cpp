void subset(int i, int len, int sum, vector<int>& ans, vector<int>& num) {
    if(i == len) {
        ans.push_back(sum);
        return;
    }
    sum += num[i];
    subset(i+1, len, sum, ans, num);
    sum -= num[i];
    subset(i+1, len, sum, ans, num);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    subset(0, num.size(), 0, ans, num);
    sort(ans.begin(), ans.end());
    return ans;
}
