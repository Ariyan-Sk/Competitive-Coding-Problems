#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    cout << n - (n / 5) << endl;
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