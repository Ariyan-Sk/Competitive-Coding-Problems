#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zero++;
    }
    if (zero > 0)
    {
        cout << n - zero << '\n';
    }
    else
    {
        sort(a, a + n);
        bool chk = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                chk = true;
        }
        if (chk == true)
            cout << n << '\n';
        else
            cout << n + 1 << '\n';
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