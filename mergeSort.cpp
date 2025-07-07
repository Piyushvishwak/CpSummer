#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    int sizel = mid-left+1, sizer = right-mid;
    vector<int> ll(sizel), rr(sizer);
    for(int i=0; i<sizel; i++){
        ll[i]=arr[left + i];
    }
    for(int j=0; j<sizer; j++){
        rr[j]=arr[mid + j + 1];
    }
    int i=0, j=0, idx=left;
    while(i < sizel && j<sizer){
        if(ll[i]<=rr[j]){
            arr[idx]=ll[i];
            i++;
        }
        else{
            arr[idx]=rr[j];
            j++;
        }
        idx++;
    }
    while(i<sizel){
        arr[idx++]=ll[i++];
    }
    while(i<sizer){
        arr[idx++]=rr[j++];
    }
}

void mergesort(vector<int>& arr, int left, int right){
    if(left>=right) return;
    int mid=(left+right)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    mergesort(arr, 0, t-1);
    for(auto& a : arr)  cout<<a<<" ";
    return 0;
}