#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    
    rep(i,m){
        if(find(a, a+n, b[i]) == a+n){
            cout << "No" << endl;
            return 0;
        }else{
            auto f = find(a, a+n, b[i]);
            a[distance(a, f)] -= b[i];
        }
    }
    cout << "Yes" << endl;
    return 0;
}