#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        queue<TreeNode*> q;
        q.push(root);
        string s;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp == NULL) {
                s.append("#,");
            } else {
                s.append(to_string(temp->val) + ',');
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data == "#") return nullptr;
        stringstream s(data);
        queue<TreeNode*> q;
        string str;
        getline(s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // Process the left child
            if (getline(s, str, ',')) {
                if (str == "#") {
                    node->left = nullptr;
                } else {
                    TreeNode* leftNode = new TreeNode(stoi(str));
                    node->left = leftNode;
                    q.push(leftNode);
                }
            }

            // Process the right child
            if (getline(s, str, ',')) {
                if (str == "#") {
                    node->right = nullptr;
                } else {
                    TreeNode* rightNode = new TreeNode(stoi(str));
                    node->right = rightNode;
                    q.push(rightNode);
                }
            }
        }
        return root;
    }
};

// Helper function to print the tree in level order for testing purposes
void printLevelOrder(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        if (node) {
            cout << node->val << " ";
            q.push(node->left);
            q.push(node->right);
        } else {
            cout << "# ";
        }
    }
    cout << endl;
}
int main() {
    Codec codec;
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3, new TreeNode(4), new TreeNode(5)));
    string serialized = codec.serialize(root);
    cout << "Serialized: " << serialized << endl;

    TreeNode* deserializedRoot = codec.deserialize(serialized);
    cout << "Deserialized tree: ";
    printLevelOrder(deserializedRoot);

    return 0;
}
