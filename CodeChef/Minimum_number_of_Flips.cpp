#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << -1 << endl;
    }

    else
    {

        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                count1++;
            }
            else
            {
                count2--;
            }
        }
        
        cout << abs((count1 + count2) / 2) << endl;
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