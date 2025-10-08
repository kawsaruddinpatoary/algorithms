#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
    int n;
    vector<vector<int>> adj;
    vector<bool> visited;
    Graph(int n){
        this->n = n;
        adj.resize(n);
        visited.resize(n, false);
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void display(){
        for(int i=0; i<adj.size(); i++){
            cout << i << ": ";
            for(int j=0; j<adj[i].size(); j++){
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    void BFS(){
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(0);
        visited[0]=true;

        while(!q.empty()){
            int u = q.front();
            q.pop();
            cout << u << " ";
            for(int j=0; j<adj[u].size(); j++){
                int v = adj[u][j];
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
    void DFS(vector<bool> &vis, int u){
        cout << u << " ";
        vis[u] = true;
        for(int v : adj[u]){
            if(!vis[v]){
                DFS(vis, v);
            }
        }
    }

    void DFS(int u=0){
        DFS(visited, u);
    }
};


int main(){
    Graph g1(6);
    g1.addEdge(0, 1);
    g1.addEdge(0, 3);
    g1.addEdge(0, 4);
    g1.addEdge(1, 2);
    g1.addEdge(1, 3);
    g1.addEdge(2, 3);
    g1.addEdge(2, 5);
    g1.addEdge(3, 4);
    g1.addEdge(3, 5);
    g1.addEdge(4, 5);

    g1.display();
    g1.BFS();
    g1.DFS(3);
}