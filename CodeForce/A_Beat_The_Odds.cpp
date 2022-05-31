#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int oddCount = 0, evenCount = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (evenCount >= oddCount)
    {
        cout << oddCount << endl;
    }
    else
    {
        cout << evenCount << endl;
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