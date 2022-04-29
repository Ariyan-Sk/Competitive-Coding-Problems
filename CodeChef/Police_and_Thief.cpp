#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int X, Y;
    cin >> X >> Y;

    cout << abs(X - Y) << endl;
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