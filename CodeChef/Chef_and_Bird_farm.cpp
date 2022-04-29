#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int count = 0, flag = 1;

    if (z % x == 0)
    {
        count++;
        flag = 1;
    }

    if (z % y == 0)
    {
        count++;
        flag = 2;
    }

    if (count == 2)
    {
        cout << "ANY" << endl;
        return;
    }
    else if (count == 1 && flag == 1)
    {
        cout << "CHICKEN" << endl;
        return;
    }
    else if (count == 1 && flag == 2)
    {
        cout << "DUCK" << endl;
        return;
    }
    else
        cout << "NONE" << endl;
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