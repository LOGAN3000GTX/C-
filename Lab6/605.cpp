#include <iostream>
#include <cmath>
using namespace std;

int two_power(int N){
    int power = 1; // it is number of power like 2^0 = 1 2^1 = 2
    while(power <= N){
        cout << power << " ";
        power *= 2;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    two_power(n);
}