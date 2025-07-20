// iota  -> fills start to n+start in vector, where n is size( of vector)
// memset  ->   fills 0, -1 and any character in the vector
// DSU sort ->     disjoint set union
// topological sort
// floyd warshall
// bit masking

// LLONG_MAX  is the real (infinite) in cpp

// iota
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5);
    iota(v.begin(), v.end(), 4);
    for (int x : v) cout << x << " ";
    return 0;
}

//topological sort only work on...
//DAG   ->> Directed acyclic graph

// we use postorder traversal with the reversal for the topological sort, we use stack in this code for reversal

// DSU  ->> find and union
// generally dfs take O(n) but same work, DSU work in O(1)

// used to find a node and tell whether two node are in connected component or not
// we can use dfs for the same work also,   but it takes O(n)

// properties of tree used in DSU and seems O(log n), but actually O(1)

// Ackerman function ->> grow vrry fast  ->> alpha 2^0, alpha 2^1.....
// reverse Ackerman function   ->> grows very slow

// for union by DSU   -->>>  we use Rank and Size


// modular power for even and odd powers
    long long mod=1e9+7;
    long long power(long long x, long long n){
        long long res = 1;
        x%=mod;
        while(n>0){
            if(n&1)
                res = (res * x) % mod;
            x = (x * x)%mod;
            n/=2;
        }
        return res;
    }