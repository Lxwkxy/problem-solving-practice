#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> result;
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> null_vector;
        if(root == nullptr) {
            return null_vector;
        }
        result.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return result;
    }
};