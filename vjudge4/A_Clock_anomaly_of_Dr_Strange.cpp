#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<int> all = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<string> ans;
    for(int i=0; i<n; i++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        vector<int> down, up;
        for(int i=all[a+1]; i<all[b-1]; i++){
            down.push_back(i);
        }
        for(int i=all[b+1]; i<all[a-1]; i++){
            up.push_back(i);
        }
        auto it1 = find(up.begin(), up.end(), c);
        auto it2 = find(up.begin(), up.end(), d);
        auto it3 = find(down.begin(), down.end(), c);
        auto it4 = find(down.begin(), down.end(), d);
        if((it1 != up.end() && it2 != up.end()) || (it3 != down.end() && it4 != down.end()) || 
            (it1 != up.end() && it3 != down.end()) || (it2 != up.end() && it4 != down.end())){
            ans.push_back("YES");
        }else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}