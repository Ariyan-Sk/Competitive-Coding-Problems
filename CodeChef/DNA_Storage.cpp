#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a = "";

    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            a += 'A';
        }
        else if (s[i] == '0' && s[i + 1] == '1')
        {
            a += 'T';
        }
        else if (s[i] == '1' && s[i + 1] == '0')
        {
            a += 'C';
        }
        else if (s[i] == '1' && s[i + 1] == '1')
        {
            a += 'G';
        }
    }
    cout << a << endl;
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