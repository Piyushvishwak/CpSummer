#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    foo;
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b)
            cout << 0 << '\n';
        
        else if (a > b) {
            if (a % 2 == 1 && a == b + 1)
                cout << y << '\n';
            else
                cout << -1 << '\n';
        }
        else {
            long long cost = 0;
            while (a < b) {
                if (a % 2 == 0) {
                    a++;
                    cost += min(x, y);
                }else {
                    a++;
                    cost += x;
                }
            }
            cout << cost << '\n';
        }
    }
    return 0;
}