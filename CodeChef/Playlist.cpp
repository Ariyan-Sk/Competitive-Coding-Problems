#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    cout << n / (3 * x) << endl;
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