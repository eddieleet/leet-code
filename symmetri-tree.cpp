#include <iostream>

//Definition for a binary tree node.
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x) : val(x), left(NULL),right(NULL){}
};

bool isSymmetricHelper(TreeNode* leftSubtree, TreeNode* rightSubtree){
    if(!leftSubtree && !rightSubtree)
    return true;

    if(!leftSubtree || !rightSubtree)
    return false;

    return (leftSubtree->val == rightSubtree->val)&& 
    isSymmetricHelper(leftSubtree->left, rightSubtree->right) &&
    isSymmetricHelper(leftSubtree->right, rightSubtree->left);
    
}

bool isSymmetric(TreeNode* root){
    if(!root)
      return true;

      return isSymmetricHelper(root->left,root->right);
}

int main(){
    // construct a symmetric tree for testing
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(3);

    if (isSymmetric(root))
     std::cout << "The tree is symmetric "<< std::endl;
 else 
    std::cout << "The tree is not symmetric "<< std::endl;

    //clean up memory (not shown in the original example)
    return 0;
}