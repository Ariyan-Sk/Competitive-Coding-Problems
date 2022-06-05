#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    if (x >= n)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (x % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
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