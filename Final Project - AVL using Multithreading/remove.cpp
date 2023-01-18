#include<iostream>
#include<string>

using namespace std;

struct TreeNode {
  int id;
  int age;
  struct TreeNode * left;
  struct TreeNode * right;
};

void traverse (TreeNode * node) {
  if (node == NULL) {
    // cout << "NULL" << endl;
  }
  else {
    // cout << "HI" << endl;
    traverse(node->left);
    cout << node->id << " " << node->age << endl;
    traverse(node->right);
  }
}

void insert (TreeNode *& node, int id, int age) {
  TreeNode * p = new TreeNode;
  if (node == NULL) {//if node is NULL
    // node = new TreeNode(id, age);
    p->id = id;
    p->age = age;
    p->left = NULL;
    p->right = NULL;
    node = p;
  }
  else if (id == node->id)
    node->age = age;  //insert age if id == node's id
  else if (id < node->id)
    insert(node->left, id, age);
  else
    insert(node->right, id, age);
}

TreeNode * find_min (TreeNode * node) {
  while (node->left!= NULL) {
    node = node->left;
  }
  return node;
}

void replace_node_in_parent (TreeNode *& node, TreeNode *& child_node) {
  // if (node.left == child_node) {
    node->id = child_node->id;
    node->age = child_node->age;
    child_node = NULL;
  // }
}

void remove (TreeNode *& root, int id) {
  if (id < root->id) {
    remove(root->left, id);
  }
  if (id > root->id) {
    remove(root->right, id);
  }
  if (root->left!=NULL && root->right!=NULL){
    TreeNode * ios = find_min(root->right);
    root->id = ios->id;
    root->age = ios->age;
    remove(ios, ios->id);
  }
  else if (root->left != NULL){
    replace_node_in_parent(root, root->left);
  }
  else if (root->right != NULL){
    replace_node_in_parent(root, root->right);
  }
  else {
    root = NULL;
  }
}

void initialize_tree(TreeNode *& node) {
  //first record is the root of the binary tree.
  int records[9][2] = {{8, 25}, {3, 10}, {6, 31}, {1, 20}, {4, 17}, {7, 17}, {10, 11}, {14, 28}, {13, 9}};
  for (int i=0; i<9; i++){
    insert(node, records[i][0], records[i][1]);
  }
}

int main() {
  string id, age;
  TreeNode * root = NULL;
  initialize_tree(root);

  traverse (root);
  cout << endl;

  int num1;
  cout << "Type in the ID of the patient's record you want to remove: ";
  cin >> num1;
  remove(root, num1);

  traverse(root);
  cout << endl;

  return 0;
}
