#include <bits/stdc++.h>
using namespace std;
// recursive aproach only may cause time limit exceed problem so jump to dp approach
int solve(string s, string t, int m, int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (s[m - 1] == t[n - 1])
        return solve(s, t, m - 1, n - 1);
    else
        return 1 + min({solve(s, t, m, n - 1), solve(s, t, m - 1, n), solve(s, t, m - 1, n - 1)}); // a lambda expression. Here'
}

int main()
{
    string s = "geek";
    string t = "gesek";
    int m = s.length();
    int n = t.size();
    cout << solve(s, t, m, n);
    return 0;
}

