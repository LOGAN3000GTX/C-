#include <iostream>
using namespace std;

void MainDiagonal(int n, int a[][100]){
    int maxVal = INT_MIN;
    int MaxRow = 0;
    int MaxCol = 0;

    for(int i = 0; i < n; i++){
        if(a[i][i] < maxVal){
            MaxRow = i;
            MaxCol = i;
            maxVal = a[i][i];
        }
    }
}

int main(){
    int n;
    cin >>  n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    MainDiagonal(n, a);
}