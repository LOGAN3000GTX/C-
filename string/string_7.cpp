#include <iostream>
#include <string>
using namespace std;
//string arrays for numbers in string form
string words[] = {"ZER", "ONE", "TWO","THR","FOU","FIV","SIX","SEV", "EIG", "NIN"};
//function for numbers
int word_to_num(const string w){
    for(int i = 0; i <= 10; i++){
        if(words[i] == w){
            return i;
        }
    }
    return -1;
}
//function for strings
string num_to_word(int n){
    if(n >= 0 && n <= 10){
        return words[i];
    }
    return -1;
}


string calculator(string s){
    size_t plus = s.find("+");
    size_t minus = s.find("-");
    size_t multiplication = s.find("*");
    size_t division = s.find("/");



    
}

int main(){
    string s;
    getline(cin, s);
    cout << String_calculator(s) << endl;
    return 0;
}