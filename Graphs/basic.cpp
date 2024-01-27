#include<iostream>
using namespace std;
int main(){
    int n, m, u, v, q;
    cout<<"Enter the nodes and edges"<<endl;
    cin>> n>>m;
    int adj[n+1][m+1];
    cout<<"Enter the no of connected edges"<<endl;
    cin>>q;
    cout<<"Enter the connected edges"<<endl;
    while(q>0){
            cin>>u>>v;
            adj[u][v]=1;
            adj[v][u]=1;
            q--;
    }
    cout<< adj[2][1];
    return 0;
}