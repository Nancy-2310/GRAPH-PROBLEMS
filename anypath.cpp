#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
int v; // no. of vertices
unordered_set<int> visited;
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end){

    if(curr == end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}
bool anyPath(int src, int dest){
        return dfs(src, dest);
}

int main(){

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    cin >> v;
    graph.resize(v, vector<int> ());

    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x, y;
    cin >> x >> y;
    cout<< anyPath(x ,y) << "\n";
    return 0;     
}