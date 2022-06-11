class solution{
    public:
    bool solve(TreeNode<int>* root){
        if(root==NULL){
            return;
        }
        int child = 0;
        if(root->right){
            child+=root->right->data;
                    }
        if(child>=root->data)root->data = child;
        else{

        if(root->left)root->left->data = root->data;////assigning child to left node
        else if(root->right)root->right->data = root->data;////assigning child to right node
       
    }
    reorder(root->left);
    reorder(root->right);

    ////////////////summing up left and right 
    int tot = 0;
    if(root->left)tot+=root->left->data;
    if(root->right)tot+=root->right->data;
    if(root->left || root->right)root->data= tot;
    ///////////////////////////////////////////
    
};