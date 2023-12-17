#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int i;
    cin >> n;
    vector<string> paraules(n);
    for(i=0; i<n; ++i){
        cin >> paraules[i];
        reverse(paraules[i].begin(), paraules[i].end());
    }
    for(i=n-1; i>=0; --i){
        cout << paraules[i] << endl;
    }

}