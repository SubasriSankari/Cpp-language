#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int num_primes = 100;
    bool primes[num_primes];
    for (int ind = 2; ind != num_primes; ind ++) {
        primes[ind] = true;
    }

    for (int ind = 2; ind != sqrt(num_primes); ind++) {
        if (primes[ind]) {        
            for (int ind1 = 2; ind * ind1 < num_primes; ind1++) {
                primes[ ind * ind1 ] = false;
            }
        }
    }
    int num;
	cout << "Enter the number:\n";
    cin >> num;
	cout << "Twin primes are:\n";

    for (int ind = num; ind - 2 >= 0; ind -- ) {
        if (primes[ind] && primes[ind-2]) {
            cout << ind-2 << " " << ind << endl;
            break;
        }
    }
    return 0;
}
