#include<bits/stdc++.h>
#define all(x) begin(x), end(x)
#define ff first
#define ss second
#define O_O
using namespace std;
template <typename T>
using bstring = basic_string<T>;
template <typename T>
using matrix = vector<vector<T>>;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef double dbl;
typedef long double dbll; 
const ll INFL = 4e18+25;
const int INF = 1e9+42;
const double EPS = 1e-7;
const int MOD = (1<<23)*17*7 + 1; // 998244353
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
const int MAXN = 1e6+1;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v1, v2;

    int a, b;
    while(cin >> a >> b){
        v1.push_back(a);
        v2.push_back(b);
    }

    sort(all(v1));
    sort(all(v2));

    int resp = 0;

    for(int i = 0; i < v1.size(); i++)
        resp+=abs(v1[i]-v2[i]);

    cout << resp << '\n';
    
    return 0;

}