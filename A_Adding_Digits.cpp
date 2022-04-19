#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, n;
    string ans;
    cin >> a >> b >> n;
    bool flag = true;

    for (int i = 0; i <= 9; i++)
    {
        if ((a * 10 + i) % b == 0)
        {
            int c = (a * 10 + i);
            ans = to_string(c);
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << -1;
        return 0;
    }

    for (int j = 1; j < n; j++)
    {
        ans += to_string(0);
    }

    cout << ans;
    return 0;
}