#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

string s;
int idx;

int getnumber()
{
    int x = 0;
    while (idx < s.size() && '0' <= s[idx] && s[idx] <= '9')
        x = x * 10 + s[idx++] - '0';
    return x;
}

int solve()
{
    deque<int> num;
    deque<char> c;

    while (idx < s.size() && s[idx] != ')') {
        if (s[idx] == '(') {
            idx++;
            int tmp = solve();
            num.push_back(tmp);
            idx++;
        } else if (s[idx] == '*' || s[idx] == '/' || s[idx] == '%') {
            int op_idx = idx;
            idx++;
            int x1 = num.back();
            num.pop_back();

            int x2;
            if (s[idx] == '(') {
                idx++;
                x2 = solve();
                idx++;
            } else
                x2 = getnumber();

            if (s[op_idx] == '*')
                num.push_back(x1 * x2);
            if (s[op_idx] == '/')
                num.push_back(x1 / x2);
            if (s[op_idx] == '%')
                num.push_back(x1 % x2);
            
        } else if (s[idx] == '+' || s[idx] == '-') {
            c.push_back(s[idx]);
            idx++;
        } else {
            int tmp = getnumber();
            num.push_back(tmp);
        }
    }

    while (!c.empty()) {
        char ch = c.front();
        c.pop_front();
        int x1 = num.front();
        num.pop_front();
        int x2 = num.front();
        num.pop_front();
        if (ch == '+')
            num.push_front(x1 + x2);
        if (ch == '-')
            num.push_front(x1 - x2);
    }
    return num.front();
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    while (getline(cin, input)) {
        stringstream ss(input);
        char ch;
        s.clear();
        while (ss >> ch) {
            if (ch == ' ') continue;
            s += ch;
        }
        idx = 0;
        cout << solve() << "\n";
    }
    
    return 0;
}