class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();  // new object arraylist created 
        helper(root, result); // helper function called 
        return result; //returns the result array 
    }

    public void helper(TreeNode root, List<Integer> res) {
       // if we are having no root values then we dont have a root, then if we have a root value then we enter the condition below  
       if (root != null) 
        
      { 
            helper(root.left, result); // goes to the left node to the root node and the result is also passed 
            res.add(root.val); // adds up the root value 
            helper(root.right, result); // right node of the root and the result is also passed as the parameter
        }
    }
}
