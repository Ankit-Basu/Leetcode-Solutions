class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int orgColor, int newColor) {
        int n = image.size(), m = image[0].size();
        if (r < 0 || c < 0 || r >= n || c >= m || image[r][c] != orgColor)
            return;
        image[r][c] = newColor;
        dfs(image, r + 1, c, orgColor, newColor);
        dfs(image, r - 1, c, orgColor, newColor);
        dfs(image, r, c + 1, orgColor, newColor);
        dfs(image, r, c - 1, orgColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orgColor = image[sr][sc];
        if (orgColor == color) return image;
        dfs(image, sr, sc, orgColor, color);
        return image;
    }
};
