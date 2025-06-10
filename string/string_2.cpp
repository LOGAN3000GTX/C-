#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;
/*
int main()
{
    char C;
    cin >> C;
    cout << char(int(C) - 1) << " " << char(int(C) + 1) << endl;
}
*/


/*
int main(){
    char c;
    cin >> c;
    char c1 = 66;
    char c2 = 68;
    cout << c1 << " " << c2 << endl;
    return 0;
}
*/
/*
int main(){
    int n;
    cin >> n;
    char Capital;
    if(n >= 65 && n <= 90){
        Capital = n;
        cout << Capital << endl; 
    }
    return 0;
}
*/
/*
int main(){
    int n;
    cin >> n;
    char lowercase;
    if(122 >= n && n >= 97){
        lowercase = n;
        cout << lowercase << endl; 
    }
    
  return 0;
}
*/
/*
int main(){
    char C;
    cin >> C;

    if(C >= 48 && C <= 57){
        cout << "digit" << endl;
    }
    if(C >= 65 && C <= 122){
        cout << "lat" << endl;
    }
    if(C >= 128 && C <= 175){
        cout << "rus" << endl;
    }
    return 0;
}
*/
/*
int main(){
    string s;
    getline(cin, s);

    char first = s[0];
    char last = s[s.size() - 1];

    cout << int(first) << " " << int(last) << endl; 

    return 0;
}
*/
int main(){
    int n;//5
    char c;//a
    cin >> n >> c;
    string s;//aaaaa
    s.reserve(n);
    for(int i = 0; i < n; i++){
        s += c;
    }
    cout << s << endl;
    return 0;
}





