int findmaxdist(map<BinaryTreeNode<int> *,BinaryTreeNode<int>*>&mpp){
    queue<BinaryTreeNode<int>*>q;
    q.push(target);
    map<BinaryTreenode<int>*,int>vis;
    vis[target]=1;
    int maxi = 0;
    while(!q.empty){
        int sz = q.size();
        int fl = 0;
        for(int i=0;i<sz;i++){
            auto node = q.front();
            q.pop();
            if(node->left&&!vis[node->left]){
                fl = 1;
                vis[node->left]=1;
                q.push(node->left);
            }
             if(node->right&&!vis[node->right]){
                fl = 1;
                vis[node->right]=1;
                q.push(node->right);
            }
            if(mpp[node]&&!vis[mpp[node]]){
                fl = 1;
                vis[mpp[node]]=1;
                q.push(mpp[node]);
            }
        }
      if(fl){maxi++;}
    }
    return maxi;
}
BinaryTree<int> bfstomapparents(BinaryTreeNode<int>* root,
map<BinaryTreeNode<int>*,BinaryTreeNode<int*>&mpp,int start){
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    BinaryTreeNode<int>* res;
    while(q.empty()){
        BinaryTreeNode<int>* node = q.front();
        if(node->data==start)res = node;
        q.pop();
        if(node->left){
            mpp[node->left] = node;
            q.push(node->left);
        }
         if(node->right){
            mpp[node->right] = node;
            q.push(node->right);
        }
    }
    return res;
}
int timetoburntree(BinaryTreeNode<int> *root,int start){
    map<BinaryTreeNode<int>*,BinaryTreeNode<int>* mpp;
    BinaryTreeNode<int> * target = bfstomapparents(root,mpp,start);
    int maxi = findmaxdist(mpp,target);
    return maxi;
}