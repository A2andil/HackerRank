//in the name of Allah

#include <iostream>
#include <vector> 
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

vector<int> lst;
map<int, int> mp;
double sum = 0, median;

int main() {
    int n, count = 0, most = 0, ans = 1000 * 1000; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        lst.push_back(a);
        sum += a, mp[a] += 1;
        if (mp[a] > most) {
            most = mp[a], ans = a;
        }
        else if (mp[a] == most && a < ans) ans = a;
    }
    sort(lst.begin(), lst.end());
    cout << fixed << setprecision(1);
    cout << sum / n << endl;
    cout << (lst[n / 2] + lst[(n - 1) / 2]) / 2.0 << endl;
    cout << ans << endl;
    return 0;
}