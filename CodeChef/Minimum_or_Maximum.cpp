#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    int maxim = a[0];
    int minim = a[0];

    for (int i = 0; i < n; i++)
    {
        maxim = max(a[i], maxim);
        minim = min(a[i], minim);

        if (a[i] == maxim || a[i] == minim)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
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