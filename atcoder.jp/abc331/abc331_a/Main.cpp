#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
	int M, D;
	cin >> M >> D;
	int y, m, d;
	cin >> y >> m >> d;
	int ansy=y, ansm=m, ansd=d;
	if(m == M && d == D) {
		ansy += 1;
		ansm = 1;
		ansd = 1;
	}else if(d == D) {
		ansm++;
		ansd = 1;
	}else ansd++;
	cout << ansy << " " << ansm  << " " << ansd << endl;
	return 0;
}