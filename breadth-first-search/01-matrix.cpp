class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();    // Number of rows in the matrix
        int n = mat[0].size(); // Number of columns in the matrix

        vector<vector<int>> dist(m, vector<int>(n, -1)); // Initialize a distance matrix with -1 (sentinel value)

        // Create a queue for BFS
        queue<pair<int, int>> q;

        // First pass: Search from 0s to 1s
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    dist[i][j] = 0; // Distance to itself is 0
                    q.push({i, j}); // Add 0s to the queue for further exploration
                }
            }
        }

        // Define the four possible directions to move: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Second pass: BFS from 0s to 1s to find the nearest distance
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (const auto& dir : directions) {
                int newX = x + dir.first;
                int newY = y + dir.second;

                // Check if the new coordinates are within bounds
                if (newX >= 0 && newX < m && newY >= 0 && newY < n && dist[newX][newY] == -1) {
                    dist[newX][newY] = dist[x][y] + 1;
                    q.push({newX, newY});
                }
            }
        }

        return dist; // Return the distance matrix with the nearest 0s for each cell
    }
};
