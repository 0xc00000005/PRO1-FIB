#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> x(n);
for (int i=0;i<n;++i){
cin >> x[i];
}
string s;
while (cin >> s){
int suma=0;
for (int i=0;i<s.size();++i){
    if (s.at(i)=='+') suma=suma+x[i];
    else if (s.at(i)=='-') suma=suma-x[i];
}
cout << suma << endl;
}
}