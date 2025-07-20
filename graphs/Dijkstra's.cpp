#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
    // Dijkstra me condition hai a+b < c where a,b,c are weights and c is the direct distance to other node while a and b are deviations(imagine triangle)
    vector<vector<pair<int, int>>> adj(V);

    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0], v = edges[i][1], w = edges[i][2];
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    
    vector<int> distance(V, INT_MAX);
    //priority_queue<pair<int, int>, vector<pair<int, int>> pq; is MAX heap (jaha greater nai hai vo max)
    //greater is a comparator function.
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //basic declaration of min heap
    //to implement min heap using max, elements negative kardo, eg convert 1 to -1 while insertion, and value nikalte time, -top() to get original value;
    
    //base case dalo
    pq.push({0, src});
    distance[src] = 0;
    
    while(!pq.empty()){
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for(int i = 0; i < adj[node].size(); i++){ //adj[node] pe jitne elements andar uspe point karega and then we'll traverse each elem
            //we're gonna use the a+b < c property here.
            //we'll be choosing 1 source and baki har node ko destination node par layenge and we'll calculate distance, 1 being direct distance  and other being deviated distance
            
            int secnode = adj[node][i].second, secdist = adj[node][i].first; //secdist is deviated dist, secnode is the other neighbouring node.
            if(dist + secdist < distance[secnode]){ //checking a+b<c. distance[secnode] means distance to other node that is not our destination node, and vaha se ek aur dist leke a+b form karna to reach our destination node
                distance[secnode] = dist + secdist; //updating distance to shortest distance, eg, c ko a+b se replace kar rahe as it is shorter
                pq.push({distance[secnode], secnode}); //now we're updating node and its shortest distance, upar to bas distance update kiya tha. Remember our original declaration of pq.push({0, 1}); distance[1] = 0; 
            }
        }
    }
    return distance;
}