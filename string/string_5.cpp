#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string removeVowels;
    removeVowels.reserve(s.size());

    for(int i = 0; i < s.size(); ++i){
        if ((s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' 
            || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'o'
            || s[i] == 'u' || s[i] == 'i')){
            continue;
        }
        removeVowels.push_back(s[i]);
    }

    cout << removeVowels << endl;
    return 0;
}