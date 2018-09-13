#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stack>
#include <cctype>

using namespace std;

void solve (string expr) {
    int i = 0;
    int n = expr.size();
    stack<int> S;
    string token;
    stringstream ss(expr);

    while (ss >> token) {
        if (isdigit(token[0]))
            S.push(atoi(token.c_str()));
        else {
            int y = S.top();
            S.pop();
            int x = S.top();
            S.pop();
            
            char ch = token[0];
            if (ch == '+')
                S.push(x+y);
            else if (ch == '-')
                S.push(x-y);
            else if (ch == '*')
                S.push(x*y);
            else if (ch == '/')
                S.push(x/y);
        }
    }
    printf("%d\n", S.top());
    S.pop();
}

int main () {
    //string expr = "4 10 * 2 +";
    string expr = "15 7 1 1 + - / 3 * 2 1 1 + + -";
    //getline(cin, expr);
    solve(expr);
}
