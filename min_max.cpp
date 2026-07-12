#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int mn = arr[0], mx = arr[0];
    for (int i = 1; i < n; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == mn) arr[i] = mx;
        else if (arr[i] == mx) arr[i] = mn;
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}