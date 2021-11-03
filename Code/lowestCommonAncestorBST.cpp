TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // using path traversal
        if(p==NULL || q == NULL)
            return root;
        TreeNode* common;
        if((p->value < root->value)  &&  (q->value < root->value))
            common = lowestCommonAncestor(root->left,p,q);
        else if((p->value> root->value) && (q->value>root->value))
            common = lowestCommonAncestor(root->right,p,q);
        else common = root;
        
        return common;    
    }