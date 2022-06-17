#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
#define pb push_back
#define in insert
#define se second
#define fi first
typedef vector<long long int> vl;
typedef vector<vector<long long int>> vvl;
typedef vector<pair<long long int,long long int>> vpl;
typedef vector<pair<int,int>> vpi;
typedef pair<long long int,long long int> pll;
typedef vector<int> vi;
typedef unordered_map<long long int , long long int> umap;
typedef map<long long int,long long int> smap;
typedef unordered_map<string , long long int> slumap;
typedef unordered_map<string , string> sumap;
typedef multimap<string , string> smul;

void split(string s,vector<string> &v,char c)
{
    string st = "";
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            v.push_back(st);
            st = "";
        }else{
            st += s[i];
        }
    }
    if(st!=""){
        v.push_back(st);
    }
}

vl factors(ll n)
{
    vl v;
    ll s = sqrt(n);
    for(ll i=1;i<=s;i++){
        if(n%i==0){
            v.pb(i);
            if(n/i != i){
                v.pb(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}

/*ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
*/

/*for(int i=0;i<nn;i++){
    ll u,v;
    cin>>u>>v;
    u--;v--; //0 based karayla
    adj[u].pb(v);
    adj[v].pb(u);
}*/

ull fun(ull m, ull suc,ull pre,ull n){
    return (suc*m)+(pre*(n-m));
}

ll Ceil(ll a, ll b){
    ll ans =a/b;
    if(a%b != 0)    ans++;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ull n,k;
        cin>>n>>k;
        map<ull,ll> setb;
        for(int i=0;i<40;i++){
            ull x = pow(2.0,i)-1;
            setb[x]=__builtin_popcount(x);
        }
        if(n>=k){
         
            cout<<k<<endl;
            continue;
        }
        ull pre=0,suc=0;
        for(int i=1;i<40;i++){
           
            ll x = pow(2.0,i)-1;
            pre=suc;
            suc=x;
            if(k<=n*x){
                break;
            }
        }
        
        
        ull val=1e9;
        ull c=0;
        c = Ceil( (k-n*pre),(suc-pre));
        ull w = fun(c,suc,pre,n)-k;
        
        cout<<(setb[pre]*(n-c))+(setb[suc]*c)-(__builtin_popcount(w))<<endl;
    }
    return 0;
}