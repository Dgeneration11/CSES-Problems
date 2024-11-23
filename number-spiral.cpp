// CSES - numeber spiral

#include <bits/stdc++.h>
using namespace std;

long long int diag(long long int r) {
    return (long long int) (r * r - (r - 1));
}

void solve() {
    long long int r, c;
    cin >> r >> c;

    long long int max_rc = max(r, c);
    long long int diag_max = diag(max_rc);

    if(r == c){
        cout << diag(r) << "\n";
        return;
    }

    if( r > c ) {
        if(r % 2 == 0) {
            cout << diag_max + (r - c ) << "\n";
        }
        else {
            cout << diag_max - (r - c) << "\n";
        }
        return;
    }

    if ( r < c) {
        if(c % 2 == 0) {
            cout << diag_max - (c - r) << "\n";
        }
        else {
            cout << diag_max + (c - r) << "\n";
        }
        return;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}