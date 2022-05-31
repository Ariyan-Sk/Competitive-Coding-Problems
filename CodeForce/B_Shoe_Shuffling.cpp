#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];

    map<int, int> test;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        test[a[i]]++;
    }

    for (auto it : test)
    {
        if (it.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    int sum = 0;
    for (auto it : test)
    {
        int temp = it.second;
        int p = 1;
        sum += temp;
        while (p <= temp)
        {
            int a = sum;
            if (p == 1)
                cout << a << " ";
            else
                cout << sum - temp + p - 1 << " ";
            p++;
        }
    }
    cout << endl;
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