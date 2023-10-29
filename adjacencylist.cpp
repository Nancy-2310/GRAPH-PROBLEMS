#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
int v;
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }

}

void display(){
    for(int i = 1; i < graph.size(); i++){
        cout<< i <<" -> ";
        for(auto el: graph[i]) {
            cout << el <<" , ";
        }
        cout << "\n";
    }
}
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cin >> v;
    graph.resize(v+1, vector<int> ());

    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();
    return 0;     
}