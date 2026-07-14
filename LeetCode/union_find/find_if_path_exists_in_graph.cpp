#include <vector>

using namespace std;

class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int x)  {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    bool Union(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) return false;

        if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
        else if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }

        return true;
    }   

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        for (const auto& edge : edges) {
            Union(edge[0], edge[1]);
        }

        return find(source) == find(destination);
    }
};