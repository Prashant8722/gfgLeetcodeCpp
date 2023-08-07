/*
#include <bits/stdc++.h>
using namespace std;
/*
Parent rank
4       1
1       0
1       0
4       2
4       0
4       1
4       0
4 2
0 1
2 3
cycle Present.
1
wrong output it is giving Cycle is not prsent 0--------1  and 2---------3 only edges
*/
/*
int A[100];
int rankl[100];

void makeSet(){
for (int i = 1; i <=100; i++)
    {
        A[i] = i;
        rankl[i] = 0;
    }
}

int find(int X)
{
    if (X == A[X])
        return X;
    return A[X] = find(A[X]);
}

void unionSet(int X, int Z)
{
    
    int rep_x = find(X);
    int rep_z = find(Z);

    if (rankl[rep_x] < rankl[rep_z])
        A[rep_x] = rep_z;
    else if (rankl[rep_x] > rankl[rep_z])
        A[rep_z] = rep_x;
    else
    {
        A[rep_z] = rep_x;
        rankl[rep_x]++;
    }
}
bool DSUCycleDetection()
{
    bool cycle = false;
    int vertices , edges ;
    cin >>vertices >>edges ;
    vector<vector<int>>ed;
    for(int i = 0 ; i < edges; i ++)
    {
        int u , v ;
        cin >> u >> v;
        ed.push_back({u , v});
    }
    for(auto i  : ed){
        int u =  i[0];
        int v = i [1];
        int x = find(u);
        int y = find(v);

        if(x == y)   cycle = true;
        else
        unionSet(u , v);
    }
    if(cycle) {
        cout<<"cycle Present."<<endl;
    }
    else
    {
        cout<<"cycle Not Present."<<endl;
    }
    return cycle;
}

int main()
{
    makeSet();
    unionSet(1, 2);
    unionSet(2, 3);
    unionSet(4,5);
    unionSet(6,7);
    unionSet(5,6);
    unionSet(3,7);

    cout << "Parent" <<" " << "rank" <<endl;
    for (int i = 1; i <=7  ; i++)
    {
        cout << A[i] <<"\t" << rankl[i] <<endl;
    }

    cout<< DSUCycleDetection();
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
        parent[rootY] = rootX;
    }
}

bool isCycle(vector<pair<int,int>> &edges) {
    for(auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        int rootU = find(u);
        int rootV = find(v);
        if(rootU == rootV) return true;
        unionSet(u,v);
    }
    return false;
}

int main() {
    int V,E;
    cin >> V >> E;
    parent.resize(V+1);
    for(int i=1;i<=V;i++) parent[i] = i;
    vector<pair<int,int>> edges(E);
    for(int i=0;i<E;i++) {
        cin >> edges[i].first >> edges[i].second;
    }
    if(isCycle(edges)) cout << "Cycle detected\n";
    else cout << "No cycle\n";
}

