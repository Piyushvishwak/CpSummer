#include <bits/stdc++.h>
using namespace std;

// Check if Monster Dies
bool func(long long h, long long k, vector<long long>& nums) {
    long long n = nums.size();
    for (long long i = 0; i < n-1; i++) {
        if( k < nums[i+1]-nums[i])
        {
            h -= k;
        }
        else
        {
            h -= nums[i+1] - nums[i];
        }
    }
    h -= k;
    if(h<=0) return true;
    return false;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, h;
        cin >> n >> h;
        vector<long long> Attacks(n, 0);
        for (long long i = 0; i < n; i++) {
            cin >> Attacks[i];
        }
        
        long long left = 1;
        long long right = h;
        long long ans = h;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            
            if (func(h, mid, Attacks)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}