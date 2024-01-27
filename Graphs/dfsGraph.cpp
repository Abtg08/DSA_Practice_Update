class Solution
{
private:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &list)
    {
        vis[node] = 1;
        list.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, list);
            }
        }
    }

public:
    vector<int> dfsOfGraph(int v, vector<int> adj[])
    {
        int vis[v] = {0};
        int start = 0;
        vector<int> list;
        dfs(start, adj, vis, list);
        return list;
    }
};