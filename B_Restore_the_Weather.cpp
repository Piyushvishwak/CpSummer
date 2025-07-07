#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin>>a>>b;
        vector<pair<int, int>> forecast(a);
        vector<int> actual(a);
        for(int i=0; i<a; i++){
            cin>>forecast[i].first;
            forecast[i].second=i;
        }
        for(int i=0; i<a; i++){
            cin>>actual[i];
        }
        sort(forecast.begin(), forecast.end());
        sort(actual.begin(), actual.end());
        vector<int> res(a);
        for(int i=0; i<a; i++){
            int idx=forecast[i].second;
            res[idx]=actual[i];
        }

        for(auto& i : res) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}