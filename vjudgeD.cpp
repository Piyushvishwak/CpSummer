#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }
    for (int i : ans) cout << i << " ";
    return 0;
}