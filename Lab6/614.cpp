#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if(n == 0) return 1;
    if(n == 1) return 0;
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}