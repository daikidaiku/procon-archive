#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int DX[] = {1, 0, -1, 0};
constexpr int DY[] = {0, 1, 0, -1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;

int main()
{
	int n, s, m, l;
	cin >> n >> s >> m >> l;
	
	int ans = INF;
	int res;
	rep(i,50){
		rep(j,50){
			rep(k,50){
				res = s*i + m*j + l*k;
				if(6*i + 8*j + 12*k >= n){
					ans = min(ans, res);
				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}