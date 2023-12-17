#include <iostream>
#include <string>
#include <vector>
using namespace std;

int numberSubsequences(const string &s, char c1, char c2, char c3){
    int count1 = 0, count2 = 0, count3 = 0;
    for (char c : s) {
        if (c == c1) count1++;
        else if (c == c2) count2 += count1;
        else if (c == c3) count3 += count2;
    }
    return count3;
}

int numberHappySubsequences(const string &s){
    char c1='('; char c2='-'; char c3=':'; char c4=')';
    return (numberSubsequences(s, c1, c2, c3)+numberSubsequences(s, c3, c2, c4));
}

int numberSadSubsequences(const string &s){
    char c1='('; char c2='-'; char c3=':'; char c4=')';
    return (numberSubsequences(s, c4, c2, c3)+numberSubsequences(s, c3, c2, c1));
}

int main() {
    string s;
    while(cin >> s)
        cout << numberHappySubsequences(s) << ' ' << numberSadSubsequences(s) << endl;
    return 0;
}
