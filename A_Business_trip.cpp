#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> months(12);
    for(int i=0; i<12; i++){
        cin >> months[i];
    }

    sort(months.rbegin(), months.rend());
    int ans=0, count=0;
    for(int i=0; i<12; i++){
        if(ans>=n)  break;
        else{
            ans+=months[i];
            count++;
        }
    }
    if(ans<n)   cout<<-1;
    else    cout<<count;
    return 0;
}