#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int third = (n - 3) / 3;
    int remain = n - third;
    int first, second;
    if (remain % 2 == 0)
    {
        first = (remain + 2) / 2;
        second = n - (first + third);
    }
    else
    {
        second = (remain - 1) / 2;
        first = (remain + 1) / 2;
    }
    cout << second << " " << first << " " << third << endl;
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