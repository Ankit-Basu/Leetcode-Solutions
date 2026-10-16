/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(p);
        queue.offer(q);

        while(!queue.isEmpty()){
            TreeNode q1= queue.poll();
            TreeNode q2= queue.poll();

            if(q1==null && q2==null){
                continue;
            }else{
                if(q1==null || q2==null|| q1.val!=q2.val ){
                    return false;
                }
            }

            queue.add(q1.left);
            queue.add(q2.left);
            queue.add(q1.right);
            queue.add(q2.right);
        }
        return true;
    }
}