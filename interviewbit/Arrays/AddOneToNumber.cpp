vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    vector<int> ans;

    for (auto it = A.rbegin(); it != A.rend(); it++) {
        int sum = (*it) + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    if (carry)
        ans.push_back(1);

    while (ans[ans.size()-1] == 0 && ans.size() > 1)
        ans.pop_back();

    reverse(ans.begin(), ans.end());
    return ans;
}

