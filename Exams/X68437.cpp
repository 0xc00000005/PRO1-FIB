#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<int> findLocation(string sample, char find)
{
    vector<int> where;
    for(int i = 0; i < sample.size(); i++)
        if(sample[i] == find)
            where.push_back(i);

    return where;
}
int numberSubsequences(const string &s, char c1, char c2, char c3){
    vector<int> result1 = findLocation(s, c1);
    vector<int> result2 = findLocation(s, c2);
    vector<int> result3 = findLocation(s, c3);
    int a=0;
    for(int i = 0; i < result1.size(); i++){
        for (int h=0; h < result2.size(); ++h){
            if (result1[i] < result2[h]){
            for (int k=0; k < result3.size(); ++k){
                if (result2[h] < result3[k]) ++a;
            }
            }
        }
    }
    return a;
}

int numberHappySubsequences(const string &s){
    char c1='(';
    char c2='-';
    char c3=':';
    char c4=')';
    return (numberSubsequences(s, c1, c2, c3)+numberSubsequences(s, c3, c2, c4));
}

int numberSadSubsequences(const string &s){
    char c1='(';
    char c2='-';
    char c3=':';
    char c4=')';
    return (numberSubsequences(s, c4, c2, c3)+numberSubsequences(s, c3, c2, c1));
}

int main()
{
    string s;
    while(cin >> s) cout << numberHappySubsequences(s) << ' ' << numberSadSubsequences(s) << endl;
    return 0;
}