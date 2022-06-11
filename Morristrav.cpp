vector<int> inorder(TreeNode * root){
    vector<int> inorder;
    TreeNode *curr= root;
    while(curr!=NULL){
        if(cur->left==NULL){
            inorder.push(curr->val);
            curr=curr->left;
        }
        else{
            TreeNode *prev = cur->left;
            while(prev->right&&prev->right!=curr){
                prev = prev->right;
            }
            if(prev->right==NULL){
                prev->right=curr;
                curr=curr->left;
            }
            else{
                prev->right=NULL;
                inorder.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    return inorder
}
vector<int> preorder(TreeNode * root){
    vector<int> preorder;
    TreeNode *curr= root;
    while(curr!=NULL){
        if(cur->left==NULL){
            preorder.push(curr->val);
            curr=curr->left;
        }
        else{
            TreeNode *prev = cur->left;
            while(prev->right&&prev->right!=curr){
                prev = prev->right;
            }
            if(prev->right==NULL){
                prev->right=curr;
                preorder.push_back(curr->val);
                curr=curr->left;
            }
            else{
                prev->right=NULL;
                
                curr=curr->right;
            }
        }
    }
    return inorder
}