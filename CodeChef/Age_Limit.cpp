#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, a;
    cin >> x >> y >> a;

    if (x <= a && a < y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}