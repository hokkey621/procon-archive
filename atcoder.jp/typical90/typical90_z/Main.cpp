#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;
//グローバル変数
int N;
int A[1010101], B[101010], col[101010];
vector<int> graph[101010];


void dfs(int pos, int cur) {
    col[pos] = cur;
    for(auto i : graph[pos]) {
        if(col[i] >= 1) continue;

        dfs(i, 3 - cur);
    }
}


int main(void) {
    //入力
    cin >> N;
    
   for(int i = 1; i < N; ++i) {
       cin >> A[i] >> B[i];
       graph[A[i]].push_back(B[i]);
       graph[B[i]].push_back(A[i]);
   }

    //処理
    dfs(1, 1);
  
    vector<int> white, red;
    for(int i = 1; i <= N; ++i) {
        if(col[i] == 1) white.push_back(i);
        if(col[i] == 2) red.push_back(i);
    }
  
	
    //結果出力
    if(white.size() < red.size()) {
        rep(i, N/2) {
            cout << red[i] << endl;
        }
    } else {
        rep(i, N/2) {
            cout << white[i] << endl;
        }
    }
    
    return 0;
}