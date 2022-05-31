#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s.length() == 1)
    {
        cout << "Bob"
             << " " << (int)s[0] - 'a' + 1 << endl;
        return;
    }

    if (s.length() % 2 == 0)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += (int)s[i] - 'a' + 1;
        }
        cout << "Alice"
             << " " << sum << endl;
        return;
    }

    else
    {
        int ans = 0;
        if (s[0] >= s[s.length() - 1])
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                ans += (int)s[i] - 'a' + 1;
            }
            cout << "Alice"
                 << " " << ans - ((int)s[s.length() - 1] - 'a' + 1) << endl;
            return;
        }

        if (s[0] < s[s.length() - 1])
        {
            for (int i = 1; i < s.length(); i++)
            {
                ans += (int)s[i] - 'a' + 1;
            }
            cout << "Alice"
                 << " " << ans - ((int)s[0] - 'a' + 1) << endl;
            return;
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