class Solution {
    int[] dr = {-1, 0, 1, 0};
    int[] dc = {0, 1, 0, -1};

    public int nearestExit(char[][] maze, int[] entrance) {
        int n = maze.length;
        int m = maze[0].length;
        Queue<int[]> q = new LinkedList<>();
        q.offer(new int[]{entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]] = '+';

        int steps = 0;
        while (!q.isEmpty()) {
            int size = q.size();
            while (size-- > 0) {
                int[] curr = q.poll();
                int row = curr[0];
                int col = curr[1];
                for (int i = 0; i < 4; i++) {
                    int nr = row + dr[i];
                    int nc = col + dc[i];
                    if (nr < 0 || nc < 0 || nr >= n || nc >= m)
                        continue;
                    if (maze[nr][nc] == '+')
                        continue;
                    if (nr == 0 || nc == 0 || nr == n - 1 || nc == m - 1)
                        return steps + 1;
                    maze[nr][nc] = '+';
                    q.offer(new int[]{nr, nc});
                }
            }
            steps++;
        }
        return -1;
    }
}