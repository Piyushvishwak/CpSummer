#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    foo;
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    unordered_map<long long, int> freq;
    freq[0] = 1;
    long long sum = 0, count = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(freq.count(sum - x)) count += freq[sum - x];
        freq[sum]++;
    }
    cout << count << endl;
    return 0;
}


// //TLE
// #include <bits/stdc++.h>
// using namespace std;
// #define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int main(){
//     foo;
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int count=0;
//     for(int i=0; i<arr.size(); i++){
//         int sum=0;
//         for(int j=i; j<arr.size(); j++){
//             sum+=arr[j];
//             if(sum==k)  count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }