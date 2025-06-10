#include <iostream>
#include <string>
using namespace std;

string Shift(string a){
    string q = a;

    for(int i = 0; i < q.size(); i++){
        char c = q[i];
        if(c >= 'a' && c <= 'z'){
            if(c == 'z'){
                q[i] = 'a';
            }
            else{
                q[i] = c + 2;
            }
        }

        if(c >= 'A' && c <= 'Z'){
            if(c == 'Z'){
                q[i] = 'A';
            }
            else{
                q[i] = c + 2;
            }
        }

    }
    return q;
}

int main() {

    string s;
    getline(cin, s);

    cout << Shift(s) << endl;

    return 0;
}
