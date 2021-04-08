#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
    vector<string> num;
    for(int i = 1; i <= 1000; i++){
        num.push_back(to_string(i));
    }
    sort(num.begin(), num.end());
    for(auto x:num) cout << x << endl;
    return 0;
}