#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {

	int num;
        cin >> num;

	bool prime = (num != 1 and num != 0);
	int j = 2;


	while (prime and j*j <= num) {
	    prime = num%j != 0;
	    ++j;
        }
    
        if (prime)
	   cout << num << " is prime" << endl;
	else
	    cout << num << " is not prime" << endl;
    }
}
