#include <bits/stdc++.h>
#define int long long
#define fastt                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
using namespace std;
bool possible(vector<int> &a, int n, int mid, int k)
{
    int subar = 1, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return false;
        if (curr + a[i] <= mid)
            curr += a[i];
        else
        {
            curr = a[i];
            subar++;
        }
    }
    return subar <= k;
}
int32_t main()
{
    fastt;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int st = 1, end = accumulate(a.begin(), a.end(), 0ll), ans;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (possible(a, n, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            st = mid + 1;
    }
    cout << ans;
    return 0;
}
// I did it!!