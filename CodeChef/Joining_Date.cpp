#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j;
    cin >> i >> j;

    cout << ((i - 1) / 5) - ((j - 1) / 5) << endl;
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