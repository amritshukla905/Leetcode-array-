#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < int > vi;
typedef vector < ll > vll;


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


#define all(x)(x).begin(), (x).end()
#define sz(x)(int)(x).size()
#define pb push_back
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
    #define rrep(i, a, b) for (int i = a; i >= b; i--)


        #ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n = sz(v);
        int mx = 0;
        int a = v[0];
        rep(i,1,n){
            if(v[i] > a){
                if(v[i]-a > mx){
                    mx = v[i]-a;
                }
            }
            else{
                a = v[i];
            }
        }
        return mx;
    }
};