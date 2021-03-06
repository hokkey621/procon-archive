#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const ll INF = 1LL<<60;
const int MAX_N = 110;
const int MAX_V = 100100;

int N;
ll W, w[MAX_N], v[MAX_N];

// DPテーブル
long long dp[MAX_N][MAX_V] = {0};

int main(void)
{
	cin >> N >> W;
	rep(i, N) cin >> w[i] >> v[i];

	rep(i, MAX_N)
	{
		rep(j, MAX_V)
		{
			dp[i][j] = INF;
		}
	}
	//初期条件
	dp[0][0] = 0;

	rep(i, N){
		for(int sumV = 0; sumV < MAX_V; sumV++){
			//選ぶ場合
			if(sumV - v[i] >= 0){
				chmin(dp[i + 1][sumV], dp[i][sumV - v[i]] + w[i]);
			}
			//選ばない場合
			chmin(dp[i + 1][sumV], dp[i][sumV]);
		}
	}

	ll res = 0;
	for(int sumV = 0; sumV < MAX_V; sumV++){
		if(dp[N][sumV] <= W)res = sumV;
	}
	cout << res << endl;
	return 0;
}