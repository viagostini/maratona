#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    string S;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> S;
        string res;
        int open = 0;
        for (char c : S) {
            int x = c - '0';
            if (open == x) {
                res.push_back(c);
            } else if (open < x) {
                string pars(x - open, '(');
                open += x - open;
                res.append(pars);
                res.push_back(c);
            } else {
                string pars(open - x, ')');
                open -= open - x;
                res.append(pars);
                res.push_back(c);
            }
        }
        if (open > 0) {
            string pars(open, ')');
            res.append(pars);
        }
        cout << "Case #" << t << ": " << res << endl;
    }
}