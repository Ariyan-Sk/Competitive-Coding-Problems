#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (y - x > 200 || x > y)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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