#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a;
        int count=0;
        for (int i = 0; i < n; ++i) {
            int b;
            cin >> b;
            if(b>c){
                count++;
            }else{
                a.push_back(b);
            }
        }

        sort(a.rbegin(), a.rend());
        int x=1;
        for(int i=0; i<a.size(); i++){
            if(a[i]*x>c){
                count++;
            }
            else x*=2;
        }
        ans.push_back(count);
    }
    for(auto i : ans)   cout<<i<<endl;
}