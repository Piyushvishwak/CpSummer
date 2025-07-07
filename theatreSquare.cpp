#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long l, b, s;
    cin >> l >> b >> s;
    long long p=(l+s-1)/s;
    long long q=(b+s-1)/s;
    cout << p*q;
    return 0;
}