//in the name of Allah

#include <iostream>
#include <vector> 
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

vector<int> lst, w;
map<int, int> mp;
double weigthed_sum = 0, weight = 0;

int main() {
    int n, a; cin >> n;
    for (int i = 0; i < n; i++) cin >> a, lst.push_back(a);
    for (int i = 0; i < n; i++) cin >> a, w.push_back(a);

    for (int i = 0; i < n; i++) {
        weight += w[i];
        weigthed_sum += w[i] * lst[i];
    }
    cout << fixed << setprecision(1);
    cout << weigthed_sum / weight << endl;
    return 0;
}