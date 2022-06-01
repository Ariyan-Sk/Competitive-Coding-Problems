#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int Pa, Pb, Qa, Qb;
    cin >> Pa >> Pb >> Qa >> Qb;
    int A = max(Pa, Pb);
    int B = max(Qa, Qb);
    if (A < B)
    {
        cout << "P" << endl;
    }
    else if (A > B)
    {
        cout << "Q" << endl;
    }
    else
        cout << "TIE" << endl;
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