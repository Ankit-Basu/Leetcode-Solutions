import java.util.Arrays;

class Solution {
    private long[][] intervals;
    private int[][] memo;
    private int[] globalWalls;
    private int n;

    public int maxWalls(int[] robots, int[] distance, int[] walls) {
        n = robots.length;
        if (n == 0) return 0;
        
        globalWalls = walls;
        Arrays.sort(globalWalls);

        long[][] vp = new long[n][2];
        for (int i = 0; i < n; i++) {
            vp[i][0] = robots[i];
            vp[i][1] = distance[i];
        }
        Arrays.sort(vp, (a, b) -> Long.compare(a[0], b[0]));

        intervals = new long[n][4];

        for (int i = 0; i < n; i++) {
            long pos = vp[i][0];
            long d = vp[i][1];

            long left_block = (i > 0 ? vp[i-1][0] : Long.MIN_VALUE);
            long right_block = (i < n - 1 ? vp[i+1][0] : Long.MAX_VALUE);

            intervals[i][0] = Math.max(pos - d, left_block);
            intervals[i][1] = pos;
            intervals[i][2] = pos;
            intervals[i][3] = Math.min(pos + d, right_block);
        }

        memo = new int[n][3];
        for (int[] row : memo) {
            Arrays.fill(row, -1);
        }

        return solve(0, 2);
    }

    private int solve(int i, int prev_dir) {
        if (i == n) return 0;
        
        if (memo[i][prev_dir] != -1) return memo[i][prev_dir];

        long prev_r = Long.MIN_VALUE;
        if (prev_dir == 0) {
            prev_r = intervals[i-1][1];
        } else if (prev_dir == 1) {
            prev_r = intervals[i-1][3];
        }

        long l1 = intervals[i][0], r1 = intervals[i][1];
        int walls_left = getCount(Math.max(l1, prev_r + 1), r1);
        int ans_left = walls_left + solve(i + 1, 0);

        long l2 = intervals[i][2], r2 = intervals[i][3];
        int walls_right = getCount(Math.max(l2, prev_r + 1), r2);
        int ans_right = walls_right + solve(i + 1, 1);

        return memo[i][prev_dir] = Math.max(ans_left, ans_right);
    }

    private int getCount(long l, long r) {
        if (l > r) return 0;
        int it1 = lowerBound(globalWalls, l);
        int it2 = upperBound(globalWalls, r);
        return it2 - it1;
    }

    private int lowerBound(int[] arr, long target) {
        int low = 0, high = arr.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    private int upperBound(int[] arr, long target) {
        int low = 0, high = arr.length;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}