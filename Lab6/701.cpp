#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // 3
    int a[n]; // 4 7 6

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] % 2 != 0){
            cout << a[i] << " ";
        } 
    }
    return 0;
}