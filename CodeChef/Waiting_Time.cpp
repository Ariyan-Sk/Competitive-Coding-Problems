#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, k;
    cin >> x >> k;
    cout << (7 * x) - k << endl;
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