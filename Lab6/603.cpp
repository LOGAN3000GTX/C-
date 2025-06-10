#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t,n;
    cin >> t >> n;
    double invest = t;
    for(int i = 0; i < n; i++){
        invest *= 2;
    }
    printf("%.4f\n", invest);
    return 0;
}