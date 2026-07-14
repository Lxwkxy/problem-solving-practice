#include <vector>

using namespace std;

class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    
    int find(int x) {
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

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = n;

        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j]) {
                    if (Union(i, j)) ans--;
                }
            }
        }

        return ans;
    }
};