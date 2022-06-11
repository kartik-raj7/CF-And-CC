class solution{
    public:
    bool solve(Node *root,vector<int>&arr,int x){
        if(root){
            return false;
        }
        arr.push_back(root->val);
        if(root->val==x)
        return true;

        if(solve(root->left,arr,x))||solve(root->right,arr,x)
        return true;

        arr.pop_back();
        return false;
    }
    public:
    vector<int> Solution::solve(Node *a,int b){
        vector<int> a;
        if(a==NULL){
            return arr;
        }
        solve(a,arr,b);
        return arr;
    }
};