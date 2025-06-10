#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // 3
    int a[n]; // -8 -14 2
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int sumPositiveNum = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] > 0){
            sumPositiveNum += 1;
        }
    }
    cout << sumPositiveNum;
    return 0;
}