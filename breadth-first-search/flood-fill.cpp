class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc]; // Get the color of the starting pixel
        if (oldColor != newColor) { // Check if the new color is different from the old color
            dfs(image, sr, sc, oldColor, newColor); // Call the DFS function to perform flood fill
        }
        return image; // Return the modified image
    }

    void dfs(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != oldColor) {
            return; // Return if out of bounds or pixel color doesn't match oldColor
        }

        image[sr][sc] = newColor; // Change the color of the current pixel to newColor

        // Recursively visit neighboring pixels in 4 directions
        dfs(image, sr - 1, sc, oldColor, newColor); // Up
        dfs(image, sr + 1, sc, oldColor, newColor); // Down
        dfs(image, sr, sc - 1, oldColor, newColor); // Left
        dfs(image, sr, sc + 1, oldColor, newColor); // Right
    }
};
