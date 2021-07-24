#include <iostream>
using namespace std;


int main(void) {
    double a, b;
    cin >> a >> b;
    printf("%.6lf\n", (a-b)/3+b);
    return 0;
}