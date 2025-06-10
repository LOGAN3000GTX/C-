#include <iostream>
#include <cmath>
using namespace std;

bool ValidN(int num){
    while(num > 0){
        int digit = num % 10; // get the last digit
        if(digit != 0){ // check it is odd
            return false;
        }
        num /= 10; // remclearove the last digit 
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(ValidN(n)){
        cout << "Valid" << endl;
    }else{
        cout << "Not valid" << endl;
    }
}