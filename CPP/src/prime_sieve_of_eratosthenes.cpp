#include <bits/stdc++.h>

using namespace std;

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true); // Index i represents if i is prime
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            // Mark all multiples of i as non-prime
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    // Print all primes
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter upper limit: ";
    cin >> n;

    sieveOfEratosthenes(n);
    return 0;
}


/**
 *
 * Time and Space Complexity:
 * Time: O(n log log n)
 * Space: O(n)
 *
 */