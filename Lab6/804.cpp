#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        int rowV = 2 * i - 1;
        for(int j = 1; j <= n; ++j){
            cout << rowV << " ";
        }
        cout << endl;
    }
}