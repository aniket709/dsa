# include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

vector<int> generatePrimes(int m) {
    vector<int> primes;

    int num = 2;

    while (primes.size() < m) {
        if (isPrime(num))
            primes.push_back(num);

        num++;
    }

    return primes;
}
# include<iostream>
using namespace std;
int minPrimes(int n, int m) {

    vector<int> primes = generatePrimes(m);

    vector<int> dp(n + 1, INT_MAX);

    dp[0] = 0;

    for (int i = 1; i <= n; i++) {

        for (int prime : primes) {

            if (i >= prime && dp[i - prime] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - prime] + 1);
            }

        }
    }

    return dp[n] == INT_MAX ? -1 : dp[n];
}

int main() {

    int n = 11;
    int m = 0;

    cout << minPrimes(n, m);

    return 0;
}