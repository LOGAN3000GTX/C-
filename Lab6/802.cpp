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
    int MaxVal = INT_MIN;
    int MaxRow = 0;
    int MaxCol = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > MaxVal){   
                MaxVal = a[i][j];
                MaxRow = i;
                MaxCol = j;
            }
        }
    }
    cout << MaxRow + 1 << " " << MaxCol + 1;
    return 0;
}