#include <iostream>
using namespace std;

bool potserunemoji(char c) {
    return (c == ':' || c == '(' || c == ')');
}

int main() {
    int f = 0;
    int s = 0;
    int v = 1;
    char ll2 = 'a';
    char ll1 = 'a';
    char lletra;

    while (cin >> lletra) {
        if (v < 3) {
            ll2 = ll1;
            ll1 = lletra;
        } else if (potserunemoji(ll2) && ll1 == '-') {
            if (lletra == '-') {
                ll1 = lletra;
            } else {
                if ((ll2 == ':' && ll1 == '-' && lletra == ')') || (ll2 == '(' && ll1 == '-' && lletra == ':')) {
                    f++;
                } else if ((ll2 == ':' && ll1 == '-' && lletra == '(') || (ll2 == ')' && ll1 == '-' && lletra == ':')) {
                    s++;
                }
                ll2 = ll1;
                ll1 = lletra;
            }
        } else {
            ll2 = ll1;
            ll1 = lletra;
        }
        v++;
    }

    cout << f << ' ' << s << endl;

    return 0;
}
