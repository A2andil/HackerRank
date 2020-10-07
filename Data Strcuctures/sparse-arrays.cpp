//In The Name of Allah

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

map<string, int> ans;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> ret; ans.clear();
    for (int i = 0; i < strings.size(); i++) {
        ans[strings[i]] += 1;
    }
    for (int j = 0; j < queries.size(); j++) {
        ret.push_back(ans[queries[j]]);
    }
    return ret;
}

int main() {
       ofstream fout(getenv("OUTPUT_PATH"));

       int strings_count;
       cin >> strings_count;
       cin.ignore(numeric_limits<streamsize>::max(), '\n');

       vector<string> strings(strings_count);

       for (int i = 0; i < strings_count; i++) {
           string strings_item;
           getline(cin, strings_item);

           strings[i] = strings_item;
       }

       int queries_count;
       cin >> queries_count;
       cin.ignore(numeric_limits<streamsize>::max(), '\n');

       vector<string> queries(queries_count);

       for (int i = 0; i < queries_count; i++) {
           string queries_item;
           getline(cin, queries_item);

           queries[i] = queries_item;
       }

       vector<int> res = matchingStrings(strings, queries);

       for (int i = 0; i < res.size(); i++) {
           fout << res[i];

           if (i != res.size() - 1) {
               fout << "\n";
           }
       }

       fout << "\n";

       fout.close();

    return 0;
}
