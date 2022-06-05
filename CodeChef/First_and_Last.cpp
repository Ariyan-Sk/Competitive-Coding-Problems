#include <bits/stdc++.h>
using namespace std;

int maximumSum(int a[], int n)
{
    int sum = a[0] + a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        sum = max(a[i] + a[i + 1], sum);
    }

    return sum;
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << maximumSum(a, n) << endl;
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