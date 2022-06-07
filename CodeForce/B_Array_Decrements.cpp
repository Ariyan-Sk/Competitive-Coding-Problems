#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum += b[i];
    }

    if (sum == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            temp = a[i] - b[i];
            if (temp < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if ((b[i] == 0 && (a[i] - b[i]) <= temp) || (a[i] - b[i]) == temp)
        {
            flag = true;
        }
        else if ((b[i] != 0 && a[i] - b[i] != temp) || b[i] == 0 && (a[i] - b[i]) > temp)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
        return;
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