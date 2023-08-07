#include<bits/stdc++.h>
using namespace std;

vector<int>parent;
   vector<int>rank;
   int findpar(int node){
       if(node==parent[node]){
           return node;
       }
       return parent[node]=findpar(parent[node]);
   }
   void disunion(int u,int v){
       u=findpar(u);
       v=findpar(v);
       if(rank[u]<rank[v]){
           parent[u]=v;
       }
       else if(rank[u]>rank[v]){
           parent[v]=u;
       }
       else{
           parent[u]=v;
           rank[v]++;
       }
   }
int detectCycle(int V, vector<int>adj[])
{
    // Code here
    parent.resize(V);
    rank.resize(V,0);
    for(int i=0;i<V;i++){
        parent[i]=i;
    }
    for(int i=0;i<V;i++){
      for(auto it:adj[i]){
          if(parent[it]==parent[i] and i<it){
              return 1;
          }
          else{
              disunion(i,it);
          }
      }
    }
    return 0;
}int main(){

return 0;
}