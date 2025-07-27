#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int t;
    cin >> t;
    while (t--) {
        long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b) swap(a, b);

        bool u = (a <= c && c <= b);
        bool v = (a <= d && d <= b);

        cout << ((u ^ v) ? "YES" : "NO") << endl;
    }
    return 0;
}
// I did it!!