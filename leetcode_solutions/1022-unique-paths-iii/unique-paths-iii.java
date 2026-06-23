class Solution {

    int total = 0;

    public int uniquePathsIII(int[][] grid) {

        int m = grid.length;
        int n = grid[0].length;

        int sr = 0, sc = 0;

        boolean[][] visited = new boolean[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] != -1)
                    total++;

                if (grid[i][j] == 1) {
                    sr = i;
                    sc = j;
                }
            }
        }

        return dfs(grid, visited, sr, sc, 1);
    }

    int dfs(int[][] grid, boolean[][] visited, int i, int j, int count) {

        if (i < 0 || j < 0 || i >= grid.length || j >= grid[0].length)
            return 0;

        if (grid[i][j] == -1)
            return 0;

        if (visited[i][j])
            return 0;

        if (grid[i][j] == 2) {
            return count == total ? 1 : 0;
        }

        visited[i][j] = true;

        int ans = 0;

        ans += dfs(grid, visited, i + 1, j, count + 1);
        ans += dfs(grid, visited, i - 1, j, count + 1);
        ans += dfs(grid, visited, i, j + 1, count + 1);
        ans += dfs(grid, visited, i, j - 1, count + 1);

        visited[i][j] = false; 

        return ans;
    }
}