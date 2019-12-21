// https://www.hackerrank.com/challenges/is-binary-search-tree/problem

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node class is defined as follows:
    class Node {
        int data;
        Node left;
        Node right;
     }
*/
boolean checkBST(Node root) {
    return checkBST(root, 0, 10000);
}

boolean checkBST(Node node, int min, int max) {
    if (node == null) {
        return true;
    } else if (node.data < min || node.data > max) { // we assume BST cannot have duplicate values
        return false;
    } else {
        return checkBST(node.left, min, node.data - 1) && checkBST(node.right, node.data + 1, max);
    }
}
