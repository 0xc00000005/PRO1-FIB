#include <iostream>
using namespace std;

int main() {
	int any, any2;
	cin >> any;
	any2 = any/100;
	//cout << any2 << endl;
	cout << ((any%100)%4) << endl;
	if ((any % 100) == 0) {
		if (any2%4 == 0){
				cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else if ((any%4)==0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}