#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n, q;
    cin >> n >> q;
    int card[n];
    rep(i,n) card[i] = 0;
    rep(i,q){
        int e, num;
        cin >> e >> num;
        if (e == 1){
            card[num-1] ++;
        }else if (e == 2){
            card[num-1] += 2;
        }else{
            if(card[num-1] > 1){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}