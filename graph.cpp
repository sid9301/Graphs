/*
graph tutorial
This tutorial demonstrates the basic operations of a graph data structure, including adding edges and printing the adjacency list representation.
the graph is represented using an adjacency list, which is a vector of vectors in C++. Each index of the outer vector represents a vertex, and the inner vector contains the list of adjacent vertices.


*/


#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;// number of nodes
    cin>>n;
    vector<vector<int> >adj(n,vector<int>(n,0));

    int e;
    cin>>e;// number of edges

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        if(u >= 0 && u < n && v >= 0 && v < n){
            adj[u][v]=1;
        } else {
            cerr << "Invalid edge: (" << u << ", " << v << ")" << endl;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}