#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int cd = a[n / 2];
    int cnt = 0;
    for (int num : a) if (num == cd) cnt++;

    if (cnt > n / 2) cout << cd;
    else cout << -1;
    return 0;
}