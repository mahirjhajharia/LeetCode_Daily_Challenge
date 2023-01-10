class Solution {
public:
bool match(TreeNode* p, TreeNode* q) {
    if(p==NULL  && q!=NULL) {
        return false;
    }
    if(p!=NULL && q==NULL) {
        return false;
    }
    if(p==NULL && q==NULL) {
        return true;
    }
    if(p->val!=q->val ) {
        return false;
    }
    if(match(p->left,q->left)==false|| match(p->right,q->right)==false){

        return false;

    }

    return true;
    

}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return match(p,q);
    }
};