#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int p = 1, q = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '1')
            p++;
        else if (s[i] == s[i + 1] && s[i] == '0')
            q++;
        else
        {
            v.push_back(max(p, q));
            p = 1;
            q = 1;
        }
    }

    int ans = 0;
    bool oddFound = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (oddFound)
        {
            ans++;
            if (v[i] % 2)
                oddFound = false;
        }
        
        else if (v[i] % 2)
            oddFound = true;
    }
    cout << ans << endl;

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