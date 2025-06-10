#include <iostream>
#include <climits>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int maxVal = INT_MIN;
    int MaxRow = 0;
    int MaxCol = 0;
    for(int i = 0; i < n; i++){
        if(a[i][i] > maxVal){
            maxVal = a[i][i];
            MaxRow = i;
            MaxCol = i;
        }
    }
    cout << "Maximum element is: " << maxVal << " with coordinates: " << MaxRow + 1 << ";" << MaxCol + 1;
    return 0;
}