#include <iostream>
#include <string>
using namespace std;
typedef long long ll;


int main(void){
	string s;
	cin >> s;

	int size = s.size();
	int n = 1 << (size - 1);
	ll sum = 0;

	for(int i = 0; i < n; i++){
		string sum_str;
		sum_str = s[0];
		for(int j = 0; j < size - 1; j++){
			if(i >> j & 1){
				sum_str += s[j + 1];
			}else{
				sum_str += '+';
				sum_str += s[j + 1];
			}
		}

		ll tmp = 0;
		for(int k = 0; k < sum_str.size(); k++){
			if(sum_str[k] != '+'){
				tmp *= 10;
				tmp += (sum_str[k] - '0');
			}else{
				sum += tmp;
				tmp = 0;
			}
		}
		sum += tmp;
	}

	cout << sum << endl;
	return 0;
}