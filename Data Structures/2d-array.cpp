//In The Name of Allah

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> lst) {
    int ans = 7 * -9;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            int rs = lst[i][j] + lst[i - 1][j] + lst[i + 1][j]
                    + lst[i + 1][j + 1] + lst[i + 1][j - 1]
                    + lst[i - 1][j + 1] + lst[i - 1][j - 1];
            if (rs > ans) ans = rs;
        }
    }
    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
