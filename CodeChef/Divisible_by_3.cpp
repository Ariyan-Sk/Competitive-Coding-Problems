#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a % 3 == 0 || b % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    if (a >= b)
    {
        while (true)
        {
            a = abs(a - b);
            count++;
            if (a % 3 == 0)
            {
                cout << count << endl;
                return;
            }
        }
    }
    else
    {
        while (true)
        {
            b = abs(b - a);
            count++;
            if (b % 3 == 0)
            {
                cout << count << endl;
                return;
            }
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