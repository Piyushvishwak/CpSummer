#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<string> ans;
    while(n--){
        int a;
        cin>>a;
        int sum=0;
        bool mark=false;
        for(int i=0; i<a; i++){
            int s;
            cin>>s;
            sum+=s;
        }
        int root = sqrt(sum);
        if(root * root == sum){
            mark = true;
        }
        if(mark)    ans.push_back("YES");
        else    ans.push_back("NO");
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}