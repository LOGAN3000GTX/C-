#include <iostream>
using namespace std;

void Transpose(int n, int m, int a[][100]){
    int Transpose[100][100];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            Transpose[i][j] = a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << Transpose[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    Transpose(n, m, a);
    return 0;
}