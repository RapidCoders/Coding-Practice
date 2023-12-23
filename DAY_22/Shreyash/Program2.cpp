// Q.2 Write program which accept number and gives average of that many prime numbers .
// Example : 
// Input : Number = 5
// [Prime numbers : 2,3,5,7,11]
// Output : 28

// Input : Number = 7
// [Prime numbers : 2,3,5,7,11,13,17]
// Output : 58
// Author: Suyash
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
void generatePrimes(int n) {
    int count = 0;
    int num = 2; 

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            ++count;
        }
        ++num;
    }

    cout << std::endl;
}

int main() {
    int n;
    cout << "num : ";
    cin >> n;
    generatePrimes(n);

    return 0;
}
