#include <iostream>
using namespace std;


int main(void){
    int n;
    cin >> n;
    int ans[11000] = {0};
    for(int x = 1; x <= 110; x++){
        for(int y = 1; y <= 110; y++){
            for(int z = 1; z <= 110; z++){
                long long tmp = x * x + y * y + z * z + x * y + y * z + z * x;
                if(tmp <= 10000) ans[tmp]++;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}