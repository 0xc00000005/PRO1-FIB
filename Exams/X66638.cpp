#include <iostream>
using namespace std;

int main() {
    int m = 1;

    while (true) {
        cin >> m;
        if (m==0){
            break;
        }
        else {
        int result = 0;
        for (int i = m; i != 0;) {
        int d = i / 10;
        result = (result - d) * 10 + i;
        i = d;
        }
        m = result;
        int n = m;
        int s =0;
        while (n != 0) {
            if (n % 10 == 1 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7 || n % 10 == 9) {
                cout << (n % 10);
                s = s*10 + (n % 10);
            }
            n = n / 10;
        }

        while (m != 0) {
            if (m % 10 == 2 || m % 10 == 4 || m % 10 == 6 || m % 10 == 8) {
                cout << (m % 10);
                s = s*10 + (m % 10);
            }
            m = m / 10;
        }

        cout << ' ' << s*2 << endl;
        }
    }

    return 0;
}