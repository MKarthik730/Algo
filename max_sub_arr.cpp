#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int csum = arr[0], msum = arr[0];
    for (int i = 1; i < n; i++) {
        csum = max(arr[i], csum + arr[i]);
        msum = max(msum, csum);
    }

    cout << msum << endl;
    return 0;
}