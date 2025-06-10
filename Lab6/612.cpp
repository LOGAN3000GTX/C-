#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    if(num == 2 || num == 3) return true;
    if(num % 2 || num % 3) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main(){
    int x;
    cin >> x;
    if(isPrime(x)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}