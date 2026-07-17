#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    const int INF = 1e9;

    void floydWarshall(int n, vector<vector<int>>& dist) {
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (dist[i][k] < INF && dist[k][j] < INF) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
    }
    
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int ans = 0, minNeighborCount = n;
        vector<vector<int>> dist(n, vector<int>(n, INF));

        for (const auto& e : edges) {
            dist[e[0]][e[1]] = dist[e[1]][e[0]] = e[2];
        }
        
        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }

        floydWarshall(n, dist);

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (dist[i][j] <= distanceThreshold) count++;
            }

            if (count <= minNeighborCount) {
                ans = i;
                minNeighborCount = count;
            }
        }

        return ans;
    }
};