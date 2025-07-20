#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    foo;
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int xa, ya, xb, yb, xc, yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        int xCommon=0;
        int yCommon=0;

        vector<int> arr1, arr2;
        arr1.push_back(xa);
        arr1.push_back(xb);
        arr1.push_back(xc);
        sort(arr1.begin(), arr1.end());
        int median1=arr1[1];
        xCommon=abs(xa-median1);
        
        arr2.push_back(ya);
        arr2.push_back(yb);
        arr2.push_back(yc);
        sort(arr2.begin(), arr2.end());
        int median2=arr2[1];
        yCommon=abs(ya-median2);

        ans.push_back(xCommon+yCommon+1);
        
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}