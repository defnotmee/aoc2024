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

bool ok(vector<int> v){
    int dec = 0, inc = 0, ok = 1;
    for(int i = 1; i < v.size(); i++){
        dec|=v[i] < v[i-1];
        inc|=v[i-1] < v[i];
        ok &= abs(v[i]-v[i-1]) <= 3 && abs(v[i]-v[i-1]) >= 1;
    }

    return dec+inc <= 1 && ok;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string linha;

    int resp = 0;

    while(getline(cin,linha)){
        // cerr << "a\n";
        istringstream linhain(linha);
        
        vector<int> v;

        int x;

        while(linhain >> x){
            v.push_back(x);
        }

        bool curresp = 0;
        for(int i = 0; i < v.size(); i++){
            vector<int> cur = v;
            cur.erase(cur.begin()+i);

            if(ok(cur)){
                curresp = 1;
                break;
            }
        }

        resp+=curresp;

    }

    cout << resp << '\n';
    
    
    return 0;

}