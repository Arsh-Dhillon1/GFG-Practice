class Solution {
  public:
    vector<int> topoSort(int v, vector<vector<int>>& edges) {
        
        // Step 1: Create adjacency list
        vector<vector<int>> adj(v);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int V = edges[i][1];
            adj[u].push_back(V);
        }

        // Step 2: Calculate indegree of each node
        vector<int> indegree(v, 0);
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                int neighbor = adj[i][j];
                indegree[neighbor]++;
            }
        }

        // Step 3: Push all nodes with indegree 0 into the queue
        queue<int> q;
        for (int i = 0; i < v; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 4: Process nodes in queue
        vector<int> topoOrder;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topoOrder.push_back(node);

            for (int j = 0; j < adj[node].size(); j++) {
                int neighbor = adj[node][j];
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Optional: Check for cycle (not a DAG)
        if (topoOrder.size() != v) {
            // Return empty or throw error based on your use-case
            return {};
        }

        return topoOrder;
    }
};