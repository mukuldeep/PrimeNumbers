#include <bits/stdc++.h>
using namespace std;

/**
 * calculate x ^ y mod p
 * @param x
 * @param y
 * @param p
 * @return
 */
long long modExp(long long x, long long y, long long p) {
    long long result = 1;
    x = x % p;

    if (x == 0) return 0; // x^y mod p is 0 if x is divisible by p

    while (y > 0) {
        if (y & 1) // If y is odd
            result = (result * x) % p;

        y = y >> 1; // y = y / 2
        x = (x * x) % p;
    }
    return result;
}

bool isPrime(long long num){
    long long _2_num_1_mod_num = modExp(2,num-1,num);
    cout<<_2_num_1_mod_num<<endl;
    if(_2_num_1_mod_num == 1){
        return true;
    }
    return false;
}


long long getRandomLL(long long low, long long high) {
    random_device rd;  // Seed source
    mt19937_64 gen(rd());  // 64-bit Mersenne Twister engine
    uniform_int_distribution<long long> dist(low, high); // Range [low, high]

    return dist(gen);
}

int main() {

//    int n;
//    cout << "Enter number to check: ";
//    cin >> n;
//
//    isPrimeFound = isPrime(n);
//    cout<<isPrimeFound<<endl;

    int n;
    bool isPrimeFound = false;
    int cnt = 0;
    while(!isPrimeFound){
        cnt++;
        n = getRandomLL(4L,60L);
        isPrimeFound = isPrime(n);
        cout<<"try:"<<cnt<<": "<<n<<"  isPrime? "<<isPrimeFound<<endl;
    }

    return 0;
}
