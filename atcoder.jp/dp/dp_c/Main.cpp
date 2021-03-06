#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 入力
int n;
ll a[100010][3]; 

// DP テーブル
ll dp[100010][3];


int main(void){
	int n;
	cin >> n;
	rep(i, n){
		rep(j, 3){
			cin >> a[i][j];
		}
	}

	rep(i, n){
		rep(j, 3){
			rep(k, 3){
				if(j == k)continue;

				chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
			}
		}
	}

	ll res = 0;
	rep(i, 3)chmax(res, dp[n][i]);
	cout << res << endl;
	return 0;
}