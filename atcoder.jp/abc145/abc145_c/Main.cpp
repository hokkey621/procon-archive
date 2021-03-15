#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i, n) for(int i = 0; i <(n); i++)
int x[10];
int y[10];


double dist(int i, int j){
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}


int functorial(int num){
    if(num == 0)return 1;
    return num * functorial(num - 1);
}


int main(void){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> x[i] >> y[i];
    double sum = 0;
    vector<int>vec(n);
    rep(i, n) vec[i] = i + 1;
    
    do{
        rep(i, n - 1)sum += dist(vec[i], vec[i + 1]); 
    }while(next_permutation(vec.begin(), vec.end()));

    cout << fixed << setprecision(10) << sum / functorial(n) << endl;
    return 0;
}