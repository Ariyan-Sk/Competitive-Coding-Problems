// https://codeforces.com/contest/2252/problem/B

#include <bits/stdc++.h>
using namespace std;
// #define int long long
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int O = 0, I = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
            O++;
        if (s[i] == '1' && s[i - 1] == '1')
            I++;
    }
    if (O == 0 && I == 0)
    {
        cout << 0 << endl;
        return;
    }
    int X;
    int S = 0;
    int P;
    if (I > O)
    {
        X = I - O;
        P = O;
        if (s[0] == '0')
            S++;
        if (s[n - 1] == '0')
            S++;
    }
    else if (I < O)
    {
        X = O - I;
        P = I;
        if (s[0] == '1')
            S++;
        if (s[n - 1] == '1')
            S++;
    }
    else
    {
        cout << I + O << endl;
        return;
    }
 
    if (X - S > 1)
        cout << -1 << endl;
    else if (X == 1)
        if (I == 0 || O == 0)
            cout << 1 << endl;
        else
            cout << 1 + 2 * abs(P) << endl;
    else if (X == 2)
        if (I == 0 || O == 0)
            cout << X + 1 << endl;
        else
            cout << 2 * P + X + 1 << endl;
    else if (I == 0 || O == 0)
        cout << X + 2 << endl;
    else
        cout << 2 * P + X + 2 << endl;
 
    return;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}
