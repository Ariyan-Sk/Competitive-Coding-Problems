// https://codeforces.com/contest/2256/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 998244353
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    if (n == 2)
    {
        int q = 0;
        if (s[0] == '?')
            q++;
        if (s[1] == '?')
            q++;
        if (q == 2)
        {
            cout << 4 << endl;
            return;
        }
        if (q == 1)
        {
            cout << 2 << endl;
            return;
        }
        cout << 1 << endl;
        return;
    }
 
    if (n == 3)
    {
        int q = 0;
        if (s == "000" || s == "010" || s == "101" || s == "111" || s == "1?1" || s == "0?0")
        {
            cout << 0 << endl;
            return;
        }
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == '?')
            {
                q++;
            }
        }
        if (q == 3)
        {
            cout << 4 << endl;
            return;
        }
 
        if (q == 2)
        {
 
            cout << 2 << endl;
            return;
        }
        if (q == 1)
        {
            if ((s[0] == '1' && s[2] == '0') || (s[0] == '0' && s[2] == '1'))
            {
                cout << 2 << endl;
                return;
            }
            cout << 1 << endl;
            return;
        }
        cout << 1 << endl;
        return;
    }
 
    bool flag = false;
    string f = "????";
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int k = 0; k < 4; k++)
        {
            if (i + k >= n)
                break;
            if (s[i + k] == '?')
                continue;
            else
            {
                if (f[k] != '?' && f[k] != s[i + k])
                {
 
                    cout << 0 << endl;
                    return;
                }
                f[k] = s[i + k];
            }
        }
        i += 3;
    }
    int q = 0;
 
    if ((f[0] == '0' && f[2] == '0') || (f[0] == '1' && f[2] == '1') || (f[1] == '0' && f[3] == '0') || (f[1] == '1' && f[3] == '1'))
    {
        cout << 0 << endl;
        return;
    }
 
    for (int i = 0; i < 4; i++)
    {
        if (f[i] == '?')
            q++;
    }
    if (q == 4)
    {
        cout << (4) % MOD << endl;
        return;
    }
    if (q == 3)
    {
        cout << (2) % MOD << endl;
        return;
    }
    if (q == 2)
    {
        if ((f[0] == '?' && f[1] == '?') || (f[1] == '?' && f[2] == '?') || (f[2] == '?' && f[3] == '?') || (f[0] == '?' && f[3] == '?'))
        {
            cout << 1 % MOD << endl;
            return;
        }
        else
        {
            cout << 2 % MOD << endl;
            return;
        }
    }
    cout << 1 << endl;
    return;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int x = 0;
    while (t--)
    {
        x++;
 
        solve();
    }
}
