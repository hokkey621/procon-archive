#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    int n;
    cin >> n;
    vector<pair<int, string> > mountain(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int t;
        cin >> t;
        mountain[i] = make_pair(t, s);
    }
    sort(mountain.begin(), mountain.end());
    cout << mountain[n - 2].second << endl;
    return 0;
}