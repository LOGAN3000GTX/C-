#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int sum_of_isCool = 0;
    for(int i = 0; i < n - 1; ++i){
        for(int j =0; j < m - 1; ++j){
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
            if(sum == 4 || sum == 0){
                sum_of_isCool++; 
            }
        }     
        if(!sum_of_isCool) break;
    }
    cout << sum_of_isCool;
    return 0;
}