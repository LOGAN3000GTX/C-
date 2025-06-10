#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;//16
    cin >> n;
    if(n <= 0){
        cout << "YES";
    }
    double root_n = log2(n);
    if(root_n == floor(root_n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}