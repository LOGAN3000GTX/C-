#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){

    while(num % 2 == 0) num /= 2;
    while(num % 3 == 0) num /= 3;
    while(num % 5 == 0) num /= 5;
    return num == 1;
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