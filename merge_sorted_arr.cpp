#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    int n;
    cin >> n;
    vector<int> b(n);
    for (int j = 0; j < n; j++) cin >> b[j];

    vector<int> res(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (k = 0; k < m + n; k++) cout << res[k] << " ";
    return 0;
}