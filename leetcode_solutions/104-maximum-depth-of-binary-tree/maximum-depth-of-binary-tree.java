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
    public int maxDepth(TreeNode root) {
        Queue<TreeNode>elementQueue = new LinkedList<>();
        elementQueue.add(root);
        if(root == null) return 0;
        int numberofLevels=0;
        while(true){
            int nodeateachlevel = elementQueue.size();
            if(nodeateachlevel == 0){
                return numberofLevels;
            }
        

        while(nodeateachlevel>0){
            TreeNode element = elementQueue.poll();
            if(element.left!=null){
                elementQueue.add(element.left);
            }
            if(element.right!=null){
                elementQueue.add(element.right);
            }
            nodeateachlevel--;
        }
        numberofLevels++;
        }
    }
}