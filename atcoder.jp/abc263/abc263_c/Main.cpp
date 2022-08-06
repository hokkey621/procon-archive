#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int counter = 0;

void Combination(vector<int> v, int n, int r, int vIndex, vector<int> temp, int tempIndex) {
    temp.at(tempIndex) = vIndex;
    if (tempIndex < r - 1) return Combination(v, n, r, vIndex + 1, temp, tempIndex + 1);
    for (int i = 0; i < temp.size(); i++) {
        cout << temp.at(i) + 1<< " ";
    }
    cout << endl;
    counter += 1;
    if (temp.at(0) == n - r) return;
    if (vIndex == v.size() - 1) {
        for (int i = r - 1, j = n - 1; i >= 0; i--, j--) {
            if (temp[i] < j) return Combination(v, n, r, temp.at(i) + 1, temp, i);
        }
    }
    return Combination(v, n, r, vIndex + 1, temp, tempIndex);
}


int main() {
    int N, M;
    cin >> N >> M;

    vector<int> test(M);
    rep(i, M) test[i] = i;

    vector<int> temp(N);
    Combination(test, test.size(), N, 0, temp, 0);
    
    return 0;
}