#include <iostream>
using namespace std;

bool Isperfect(int n, int a[100][100]){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i][j] != a[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    if(Isperfect(n, a)){
        cout << "Perfect.";
    }            
    else{
        cout << "Not Perfect.";
    }
}