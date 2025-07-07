// 1. off ith bit of n              -> n=n&(~(1<<i))
// 2. on ith bit of n               -> n=n|(1<<i)
// 3. check if ith bit is on        -> if((n&(1<<i))>0)
// 4. toggle ith bit                -> n=n^(1<<i)

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    int count=0;
    for(int i=0; i<31; i++){
        if((t&(1<<i)) > 0)              //O(logn)
            count++;
    }
    cout << count<<"\n";
    cout << __builtin_popcount(t);      //builtin function to find number of on bits (O(1))
    return 0;
}