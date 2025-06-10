#include <iostream>
#include <cmath>
using namespace std;

long long Factorial(int n_th){
    if(n_th == 0 || n_th == 1){
        return 1;
    }
    return n_th * Factorial(n_th - 1);
}

int main(){
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}