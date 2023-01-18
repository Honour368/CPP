#include<iostream>
#include<thread>
#include<vector>

using namespace std;

struct TreeNode {
  int id;
  int age;
  TreeNode * left;
  TreeNode * right;
};

TreeNode * found_node = NULL;

TreeNode * Unbalanced_node;  //store the rightmost unbalanced node

TreeNode * search (int id, TreeNode * node) {
  if (node == NULL || node->id == id)
    return node;
  if (id < node->id)
    return search(id, node->left);
  else //if id > node->id
    return search(id, node->right);
}

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

TreeNode * find_max (TreeNode * node) {
  while (node->right!= NULL) {
    node = node->right;
  }
  return node;
}

TreeNode * find_parent_node(TreeNode * node, int id) {

  if (node == NULL) {
    return NULL;
  }
  TreeNode * parent_node = NULL;
  while(node!=NULL) {
    if (id < node->id){
      parent_node = node;
      node = node->left;
    }
    else if (id > node->id) {
      parent_node = node;
      node = node->right;
    }
    else
      break;
  }
  return parent_node;
}

void replace_node_in_parent (TreeNode * root, TreeNode *& node, TreeNode *& child_node) {
  TreeNode * grand_parent = find_parent_node(root, node->id);
  if (grand_parent->left !=NULL && grand_parent->left->id == node->id) {
    if (node->left!=NULL && node->left->id == child_node->id) {
      grand_parent->left = node->left;
      delete node;
    }
    else {
      grand_parent->left = node->right;
      delete node;
    }
  }
  else    //(grand_parent->right->id == node->id)
    if (node->left!=NULL && node->left->id == child_node->id) {
      grand_parent->right = node->left;
      delete node;
    }
    else {
      grand_parent->right = node->right;
      delete node;
    }
  }

void remove (TreeNode *& root, int id) {
  TreeNode * newNode = search(id, root);

  //if has two children
  if (newNode->left != NULL && newNode->right != NULL) {
    int id_temp;
    int age_temp;
    TreeNode * iop = find_max(newNode->left); //iop = in-order predecessor.
    TreeNode * parent_node = find_parent_node(root, iop->id);
    if (parent_node->left->id == iop->id) {
        id_temp = iop->id;
        age_temp = iop->age;
        parent_node->left = NULL;
        newNode->id = id_temp;
        newNode->age = age_temp;
        delete iop;
      }
    else {
        id_temp = iop->id;
        age_temp = iop->age;
        parent_node->right = NULL;
        newNode->id = id_temp;
        newNode->age = age_temp;
        delete iop;
      }
  }

  //if has only left child
  else if (newNode->left != NULL) {
    replace_node_in_parent(root, newNode, newNode->left);
  }

  //if has only right child
  else if (newNode->right != NULL) {
    replace_node_in_parent(root, newNode, newNode->right);
  }

  //if node has no children
  else {
    TreeNode * parent_node = find_parent_node(root, id);
    if (parent_node->left!=NULL && parent_node->left->id == id) {
      parent_node->left = NULL;
      delete newNode;
    }
    else {
      parent_node->right = NULL;
      delete newNode;
    }
  }
}

int height(TreeNode * root) {
  //recursively returns the height of each node
  if (root == NULL)
    return -1;
  int left_height = height(root->left);
  int right_height = height(root->right);
  if (left_height>right_height)
    return (left_height+1);
  else
    return (right_height+1);
}

bool isBalanced(TreeNode * root) {
  //recursively checks if each node in the tree is balanced
  if (root == NULL)  //base case for leaves. leaves are balanced because they have children
    return 1;
  int left_height = height(root->left);
  int right_height = height(root->right);
  if ((right_height-left_height) <= 1 && (right_height-left_height) >=-1 && isBalanced(root->left) && isBalanced(root->right))
    return 1;
  return 0;
}

TreeNode * left_rotate(TreeNode *& node) {

  TreeNode * pivot = node->right;
  node->right = pivot->left;
  pivot->left = node;
  return pivot;
}

TreeNode * right_rotate(TreeNode *& node) {

  TreeNode * pivot = node->left;
  node->left = pivot->right;
  pivot->right = node;
  return pivot;
}

int balance_factor(TreeNode * node) {
  int lh, rh, bf; //left height, right height, balance factor
  if (node->left == NULL)
    lh = 0;
  else
    //add one because height of left child doens't include the child itself
    lh = height(node->left)+1;
  if (node->right == NULL)
    rh = 0;
  else
    rh = height(node->right)+1;
  bf = rh -lh;
  return bf;
}

void traverse_rebalance (TreeNode * node) {
  //recursively traverses the tree in pre-order fashion and stores the nodes
  //that are unbalanced in the global variable 'Unbalanced_node'
  if (node == NULL) {
    // do nothing
  }
  else {
    if (!(balance_factor(node) <=1 && balance_factor(node) >=-1)) {
      Unbalanced_node = node;
    }
    traverse_rebalance(node->left);
    traverse_rebalance(node->right);
  }
}

void rebalance(TreeNode *& node) {

  while (!isBalanced(node)) {
    traverse_rebalance(node);
    cout << Unbalanced_node->id << " is the ID of the unbalanced node"<< endl;
    TreeNode * parent_node = find_parent_node(node, Unbalanced_node->id);
    if (balance_factor(Unbalanced_node)> 0) {//node is right heavy
      if (balance_factor(Unbalanced_node->right) >= 0) {
        cout << "right right heavy" << endl;
        if (Unbalanced_node->id == node->id)
          //in case the Unbalanced_node is the root
          //because we can't find parent node for root
          node = left_rotate(Unbalanced_node);
        else {
          //where the unbalanced node isn't the root
          if (Unbalanced_node->id == parent_node->left->id)
            parent_node->left = left_rotate(Unbalanced_node);
          else
            parent_node->right = left_rotate(Unbalanced_node);
          }
      }
      else {
        cout << "right left heavy" << endl;
        //first rotation
        Unbalanced_node->right = right_rotate(Unbalanced_node->right);
        // second rotation
        if (Unbalanced_node->id == node->id) //wehre unbalanced node == root
          node = left_rotate(Unbalanced_node);
        else {
          //where the unbalanced node isn't the root
          if (Unbalanced_node->id == parent_node->left->id)
            parent_node->left = left_rotate(Unbalanced_node);
          else
            parent_node->right = left_rotate(Unbalanced_node);
        }
      }
    }
    else {//node is left heavy
      if (balance_factor(Unbalanced_node->left) <= 0) {//left heavy
        cout << "left left heavy" << endl;
        if (Unbalanced_node->id == node->id) //where unbalanced node == root
          node = right_rotate(Unbalanced_node);
        else {
          //where unbalanced node isn't the root
          if (Unbalanced_node->id == parent_node->left->id)
            parent_node->left = right_rotate(Unbalanced_node);
          else
            parent_node->right = right_rotate(Unbalanced_node);
          }
      }
      else {
        cout << "left right heavy" << endl;
        //first rotation
        Unbalanced_node->left = left_rotate(Unbalanced_node->left);
        //second rotation
        if (Unbalanced_node->id == node->id) //where unbalanced node == root
          node = right_rotate(Unbalanced_node);
        else {
          //where unbalanced node isn't the root
          if (Unbalanced_node->id == parent_node->left->id)
            parent_node->left = right_rotate(Unbalanced_node);
          else
            parent_node->right = right_rotate(Unbalanced_node);
        }
      }
    }
  }
  cout << "BST has been rebalanced" << endl;
}

void preorder_traverse (TreeNode * node) {
  if (node == NULL) {
    // do nothing
  }
  else {
    // if (node->id == id);
    //   found_node = node;
    cout << node->id << " " << node->age << endl;
    preorder_traverse(node->left);
    preorder_traverse(node->right);
  }
}

void search_preorder_traverse (int id, TreeNode * node) {
  if (node == NULL) {
    // do nothing
  }
  else {
    if (node->id == id)
      found_node = node;
    cout << node->id << " " << node->age << endl;
    search_preorder_traverse(id, node->left);
    search_preorder_traverse(id, node->right);
  }
}

void Concurrent_search (int id, TreeNode * node) {
  vector <thread> left_thread, right_thread;
  if (node != NULL) {
      if (node->id == id)
        found_node = node;
      if (node->right!=NULL) {
        right_thread.push_back(thread(search_preorder_traverse, id, node->right));
      }
      if (node->left!=NULL) {
        left_thread.push_back(thread(search_preorder_traverse, id, node->left));
      }
      cout << node->id << " " << node->age << endl;   //print out root node's value first.
      for (int i=0; i<left_thread.size(); i++) {
        left_thread.at(i).join();
      }
      for (int i=0; i<right_thread.size(); i++) {
        right_thread.at(i).join();
      }
      if (found_node!=NULL)
        cout << "Age of patient " << found_node->id << " is: " << found_node->age << endl;
      else
        cout << "Patient's record not found" << endl;
  }
  else {
    cout << "Tree is NULL" << endl;
  }
}

int main() {
  string id, age;
  TreeNode * root = NULL;
  initialize_tree(root);


  //to rebalance the tree incase it is not balanced.
  if (!isBalanced(root))
    rebalance(root);
  cout << endl;

  //calling Concurrent_search function
  cout << "Please input the ID of the patient whose age you want to find: ";
  int id1;
  cin >> id1;
  Concurrent_search(id1, root);

  //delete the binary tree to clear memory space
  while (root->left != NULL) {
    remove(root, root->left->id);
  }
  while (root->right !=NULL) {
    remove(root, root->right->id);
  }
  delete root;


  return 0;
}
