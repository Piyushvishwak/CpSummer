#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m; //rows and col
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)); //matrix
        //taking input in matrix
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        //finding max element
        int max_element = INT_MIN;
        
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                max_element = max(a[i][j], max_element);
            }
        }
        //finding frequency using map;
        map<int, int> max_freq_row, max_freq_col;
        int cnt = 0;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == max_element){
                    max_freq_row[i]++;
                    max_freq_col[j]++;
                    cnt++;
                }
            }
        }
        long long ans = max_element; //base answer case
        //testing combinations
        bool all_covered = false;
        for(auto& i : max_freq_row){
            for(auto& j : max_freq_col){
                long long r = i.first;
                long long c = j.first;
                int affected = max_freq_col[c] + max_freq_row[r] - (a[r][c] == max_element);
                if(affected == cnt){
                    all_covered = true;
                }
            }
        }
        if(all_covered){
            ans = max_element-1;
        }
        else ans = max_element;
        cout << ans << '\n';
    }
    return 0;
}