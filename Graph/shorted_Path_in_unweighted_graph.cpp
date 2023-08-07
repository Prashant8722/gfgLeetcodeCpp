//modification needed giving wrong result

#include<bits/stdc++.h>
using namespace std;
/*
vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        vector<int> dist(n,-1);

        vector<vector<int>> adj(n);
        
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        dist[src] = 0;
        queue<int>q;
        vector<bool>visited(n,false);
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int v : adj[u])
            {
                if(visited[u] == false)
                { 
                    dist[v] = dist[u] + 1;  //important line
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(visited[i] == false && i != src)
            {
                dist[i] = -1;
            }
        }
        return dist;
    }
*/
 vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        vector<int> dist(n,-1);
        
        vector<vector<int>> adj(n);
        
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        dist[src] = 0;
        queue<int>q;
        vector<bool>visited(n,false);
        q.push(src);
        visited[src] = true;
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int v : adj[u])
            {
                if(visited[v] == false)
                { 
                    dist[v] = dist[u] + 1;  //important line
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return dist;
    }

int main()
{
        int n = 4, m = 5 , src = 0;
        // cin >> n >> m >> src;
        vector<vector<int>> edges;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            int k;
            cin>>k;         //edges connected to a vertices
            for(int j=0; j<k; ++j){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        // Displaying the 2D vector
	for (int i = 0; i < edges.size(); i++) {
		for (int j = 0; j < edges[i].size(); j++)
			cout << edges[i][j] << " ";
		cout << endl;
	}

	cout << "Following is shortest path from source"
			") \n";
        vector<int> res  = shortestPath(edges,n,m,src);
        for(auto i : res)
        {
                cout<<i<<" ";
        }
        cout<<"Good result found!"<<endl;
	return 0;
}
