class Solution {
public:
int ans = 0;
void subtree(TreeNode* root , int &sum , int &count){
    if(root == NULL) return;
   int leftcount = 0 , leftsum = 0;
    subtree(root -> left ,leftsum , leftcount);
    int rightcount = 0, rightsum = 0;
    subtree(root -> right , rightsum , rightcount);
    sum = leftsum + rightsum + root -> val;
    count = leftcount + rightcount + 1;
    if(root -> val == sum/count) ans++;
}
    int averageOfSubtree(TreeNode* root) {
        int sum = 0 , count = 0;
        subtree(root , sum , count);
        return ans;
    }
};