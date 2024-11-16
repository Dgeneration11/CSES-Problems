#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ops = 0;
    for(int i = 1; i < n; i++) {
        if(a[i-1] <= a[i]) {
            continue;
        } else {
            ops += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << ops << "\n";
    
    return 0;
}