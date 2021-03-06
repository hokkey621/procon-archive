#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const ll INF = 1LL<<60;

int N;
ll W, w[110], v[110];

// DPテーブル
long long dp[110][100100] = {0};

int main(void){
	cin >> N >> W;
	rep(i, N)cin >> w[i] >> v[i];

	rep(i, N){
		for(int sumW = 0; sumW <= W; sumW++){
			//選ぶ場合
			if(sumW - w[i] >= 0){
				chmax(dp[i + 1][sumW], dp[i][sumW - w[i]] + v[i]);
			}
			//選ばない場合
			chmax(dp[i + 1][sumW],dp[i][sumW]);
		}
	}

	cout << dp[N][W] << endl;
	return 0;
}