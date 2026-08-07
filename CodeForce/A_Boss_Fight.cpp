// https://codeforces.com/contest/2252/problem/A
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    map<int,int> cnt;
    int sum = 0;
 
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cnt[x]++;
        sum += x;
    }
 
    int mx = 0;
    int val = 0;
 
    for(auto [x,f] : cnt){
        if(f > mx){
            mx = f;
            val = x;
        }
    }
 
    int others = n - mx;
 
    if(mx <= others + 1){
        cout << sum << "\n";
        return;
    }
 
    int lost = mx - others - 2;
    if(lost < 0) lost = 0;
 
    cout << sum - lost * val << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while(T--) solve();
