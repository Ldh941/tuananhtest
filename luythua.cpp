#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int powMod(int a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int x = powMod(a, n / 2);
        return (1LL * x * x) % MOD;
    } else {
        return (1LL * powMod(a, n - 1) * a) % MOD;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, n;
        cin >> a >> n;
        int result = powMod(a, n);
        cout << result << endl;
    }
    return 0;
}
