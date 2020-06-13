//In the name of Allah

#include <bits/stdc++.h>

using namespace std;

long mod = 1000 * 1000 * 1000 + 7;

int summingSeries(long n) {
    return ((n % mod) * (n % mod)) % mod;
}

int main() {
    int t; cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n; cin >> n;

        int result = summingSeries(n);

        cout << result << endl;
    }
    return 0;
}
