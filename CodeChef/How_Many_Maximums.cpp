#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }

    bool flag = false;
    for (int i = 0; i < (s.length() - 1); i++)
    {
        if (s[i] == s[i + 1])
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
        cout << 1 << endl;
        return;
    }

    if (s[0] == '1')
    {
        for (int i = 0; i < (s.length() - 1); i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                count++;
            }
        }
        if (s[s.length() - 1] == '0')
            cout << count + 2 << endl;
        else
            cout << count + 1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < (s.length() - 1); i++)
        {

            if ((s[i] == '0' && s[i + 1] == '1'))
            {
                count++;
            }
        }
        if (s[s.length() - 1] == '0')
            cout << count + 1 << endl;
        else
            cout << count << endl;
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