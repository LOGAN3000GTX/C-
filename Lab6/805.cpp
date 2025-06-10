#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int sum_of_diagonal = 0;
    int multiple = 0;
    for(int i = 0; i < n; ++i){
        sum_of_diagonal += a[i][n - 1 - i];
        multiple *= a[i][n - 1 - i];
    }
    cout << sum_of_diagonal << " " << multiple;
    return 0;
}