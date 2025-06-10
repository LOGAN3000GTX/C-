#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n; // 4
    int a[n]; // -10 -2 -5 -8
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int Max = a[0];
    int Max_Pos = 0;
    for(int i = 1; i < n; ++i){
        if(a[i] > a[Max_Pos]){
            Max_Pos = i;
        }
    }
    cout << Max_Pos + 1;
    return 0;
}