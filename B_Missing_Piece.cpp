#include <bits/stdc++.h>
using namespace std;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fastt;
    int n;
    cin >> n;
    vector<char> ans;
    while(n--){
        vector<vector<char>> arr(3, vector<char>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }
        int row=-1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] =='?'){
                    row=i;
                    break;
                }
            }
            if(row != -1) break;
        }
        
        int countA = 0, countB = 0, countC = 0;
        for(int j=0; j<3; j++){
            if(arr[row][j] == 'A') countA++;
            else if(arr[row][j] == 'B') countB++;
            else if(arr[row][j] == 'C') countC++;
        }
        
        if(countA == 0) ans.push_back('A');
        else if(countB == 0) ans.push_back('B');
        else if(countC == 0) ans.push_back('C');
    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}
// I did it!