#include <bits/stdc++.h>
using namespace std;
#define foo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//make fenwick tree
void update(int ind, int x, int n, vector<int>& fenwick) {
    while (ind <= n) {
        fenwick[ind] += x;
        ind += (ind & (-ind));
    }
}

//calculate prefixSum
int prefixSum(int ind, vector<int>& fenwick) {
    int sum = 0;
    while (ind > 0) {
        sum += fenwick[ind];
        ind -= (ind & (-ind));
    }
    return sum;
}

int main(){
    foo;
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> fenwick(n+1, 0);
    
    for(int i=0; i<n; i++){
        update(i+1, arr[i], n, fenwick);
    }

    for(int i=0; i<q; i++){
        int type, x, y;
        cin>>type>>x>>y;
        if(type==1){
            int diff = y - arr[x-1];
            arr[x-1] = y;
            update(x, diff, n, fenwick);
        }
        else{
            int till=prefixSum(y, fenwick);
            int before=prefixSum(x-1, fenwick);
            int sum=till-before;
            ans.push_back(sum);
        }

    }
    for(auto i : ans)  cout << i << endl;
    return 0;
}