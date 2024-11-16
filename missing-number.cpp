#include <bits/stdc++.h>
using namespace std;

void solve() {

}

int main() {
    long n;
    cin >> n;
    vector<long> a(n-1);
    long missing = 0;
    long arrSum = 0;
    long sum = n*(n+1)/2;
    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
        arrSum += a[i];
    }
    missing = sum - arrSum;

    cout << missing << "\n";
    return 0;
}