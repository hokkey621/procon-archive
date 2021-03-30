#include <iostream>
#include <cmath>
using namespace std;


double func(double p, double x){
    return x + p / pow(2, x / 1.5);
}


int main(void){
    double p;
    cin >> p;
    double low = 0;
    double high = 1e18;
    while(1e-9 < high - low){
        double a = (low * 2 + high) / 3;
        double b = (low + high * 2) / 3;
        if(func(p, a) > func(p, b)) low = a;
        else high = b;
    }
    printf("%.10lf\n", func(p, low));
    return 0;
}