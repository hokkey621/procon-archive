#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    string s;
    cin >> s;

    //処理
    bool can = false;

    if(s.size() == 1) {
        if(s == "8") {
            cout << "Yes" << endl;
            return 0;
        }
    } else if(s.size() == 2) {
        if(stoi(s) % 8 == 0) can = true;
        else {
            swap(s[0], s[1]);
            if(stoi(s) % 8 == 0) can = true;
        }
        if(can) {
            cout << "Yes" << endl;
            return 0;
        }
    } else {
        vector<int> cnt(10, 0);
        rep(i, s.size()) {
            ++cnt[s[i] - '1'];
        }
        
        for(int n = 112; n < 1000; n += 8) {
            char first, second, third;
            first = n / 100;
			if (cnt[first - 1] == 0) continue;
			cnt[first - 1]--;

			second = (n / 10) % 10;
			if (!second || cnt[second - 1] == 0) { cnt[first - 1]++; continue; }
			cnt[second - 1]--;

			third = n % 10;
			if (!third || cnt[third - 1] == 0) { cnt[first - 1]++, cnt[second - 1]++; continue; }

            cout << "Yes" << endl;
            return 0;
        }
    }

    //結果出力
    cout << "No" << endl;
    return 0;
}

