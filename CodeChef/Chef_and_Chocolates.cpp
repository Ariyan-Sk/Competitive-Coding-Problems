#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int totalSum = (5 * x) + (10 * y);
    cout << (totalSum / z) << endl;
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