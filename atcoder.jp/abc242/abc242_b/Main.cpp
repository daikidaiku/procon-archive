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
    string s;
    cin >> s;
    int n = s.size();
    vector<char> z(n);
    rep(i,n) z[i] = s[i];

    sort(all(z));

    rep(i,n){
        if (i != n-1) cout << z[i];
        else cout << z[i] << endl;
    }
    return 0;
}