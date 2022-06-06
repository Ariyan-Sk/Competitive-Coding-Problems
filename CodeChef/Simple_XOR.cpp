#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    if ((r - l < 3) || (l % 2 != 0 && (r - l == 3)))
    {
        cout << -1 << endl;
    }

    else if (l % 2 == 0)
    {
        cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;
    }
    else
    {
        cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << endl;
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