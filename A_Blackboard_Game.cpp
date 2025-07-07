#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int n;
        cin>>n;
        if (n % 4 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    for(auto i : ans)   cout<<i<<"\n";
    return 0;
}