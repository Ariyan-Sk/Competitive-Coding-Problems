https://codeforces.com/contest/2256/problem/A

#include <bits/stdc++.h>
using namespace std;
// #define int long long
 
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    int x = max({a, b, c});
    int y = min({a, b, c});
    int z = a + b + c - x - y;
 
    if (y + z > x)
        cout << x - y << endl;
    else
        cout << z << endl;
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
