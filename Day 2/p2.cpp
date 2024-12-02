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
    
    string linha;

    int resp = 0;

    while(getline(cin,linha)){
        // cerr << "a\n";
        istringstream linhain(linha);

        int lst;
        linhain >> lst;

        int dec = 0, inc = 0, ok = 1;

        int x;

        while(linhain >> x){
            dec|=x < lst;
            inc|=lst < x;
            ok &= abs(x-lst) <= 3 && abs(x-lst) >= 1;
            lst = x;
            // cerr << "-> " << x << '\n';
        }

        // cerr << dec << ' ' << inc << ' ' << ok << '\n';

        resp += dec+inc <= 1 && ok;

    }

    cout << resp << '\n';
    
    
    return 0;

}