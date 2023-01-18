#include<iostream>
#include<thread>

using namespace std;

void insert (TreeNode *& node, int id, int age) {
  TreeNode * p = new TreeNode;
  if (node == NULL) {//if node is NULL
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

void initialize_tree(TreeNode *& node) {
  //first record is the root of the binary tree.
  //records have to be inputted in this exact manner to get the wanted binary tree
  int records[9][2] = {{8, 25}, {3, 10}, {6, 31}, {1, 20}, {4, 17}, {7, 17}, {10, 11}, {14, 28}, {13, 9}};
  for (int i=0; i<9; i++){
    insert(node, records[i][0], records[i][1]);
  }
}

void preorder_traverse (TreeNode * node) {
  if (node == NULL) {
    // do nothing
  }
  else {
    cout << node->id << " " << node->age << endl;
    traverse(node->left);
    traverse(node->right);
  }
}

TreeNode * Concurrent_search (int id, TreeNode * node) {
  if (node != NULL) {
    while (node->id != id){
      if (root->left!=NULL){
        threadpool.push(Concurrent_search, id, root->left);
        Concurrent_search(id, root->right);
      }
    }
  }
  else{
    cout << "Tree is NULL" << endl;
  }
}

int main() {
  string id, age;
  TreeNode * root = NULL;
  initialize_tree(root);



  return 0;
}
