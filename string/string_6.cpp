#include <iostream>
#include <string>
using namespace std;


string Hex_convert(int n){
    if(n == 0) return "0";
    string digits = "0123456789ABCDEF";
    string hex = "";
    while(n > 0){
        int remove = n % 16;
        hex = digits[remove] + hex;
        n /= 16;
    }
    return hex;
}

int main(){
    int n;
    cin >> n;
    cout << Hex_convert(n) << endl;
    return 0;
}