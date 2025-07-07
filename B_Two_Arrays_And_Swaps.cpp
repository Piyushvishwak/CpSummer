#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for(int i=0; i<n ;i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n ;i++){
            cin>>arr2[i];
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.rbegin(), arr2.rend());
        int idx1=0;
        int idx2=0;
        while(k--){
            if(arr1[idx1]<arr2[idx2])
                swap(arr1[idx1], arr2[idx2]);
            idx1++;
            idx2++;
        }
        int sum=0;
        for(int i : arr1)   sum+=i;
        cout<<sum<<endl;
    }
    return 0;
}