#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string ans = "";

    rep(i,N){
        ans += S[i];
        ans += S[i];
    }
    cout << ans << endl;
    return 0;
}