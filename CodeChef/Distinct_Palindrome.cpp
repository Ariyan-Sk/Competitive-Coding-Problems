#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int c = 'a';
    string s = "", r;
    if (n % 2 == 0)
    {
        if (k > n / 2)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            for (int i = 0; i <= n / 2 - k; i++)
            {
                s += (char)c;
            }
            for (int i = 1; i <= k - 1; i++)
            {
                s += (char)(c + i);
            }
        }
        r = s;
        reverse(s.begin(), s.end());
        cout << r + s << endl;
    }
    else
    {
        if (k > (n + 1) / 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i <= (n + 1) / 2 - k; i++)
            {
                s += (char)c;
            }
            for (int i = 1; i <= k - 1; i++)
            {
                s += (char)(c + i);
            }
            r = s;
            s.pop_back();

            reverse(s.begin(), s.end());
            cout << r + s << endl;
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