#include<iostream>
#include<string>

using namespace std;

struct TreeNode {
  int id;
  int age;
  TreeNode * left;
  TreeNode * right;
};

//all functions start from the root of the tree except 'find_min'
void traverse (TreeNode * node) { //to print out the value of each node in the binary tree in an in-order traversal
  if (node == NULL) {
    // do nothing
  }
  else {
    traverse(node->left);
    cout << node->id << " " << node->age << endl;
    traverse(node->right);
  }
}

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
    // cout << "hi1" << endl;
    // cout << newNode->left->id << endl;
    replace_node_in_parent(root, newNode, newNode->left);
  }

  //if has only right child
  else if (newNode->right != NULL) {

    // cout << "hi2" << endl;
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

void initialize_tree(TreeNode *& node) {
  //first record is the root of the binary tree.
  //records have to be inputted in this exact manner to get the wanted binary tree
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

  //calling insert function
  int num;
  cout << "How many patient's records do you want to insert? ";
  cin >> num;
  if (num > 0) {
    cout << "Insert the record details below." << endl;
    for (int i=0; i<num; i++) {
      cin >> id >> age;
      insert (root, stoi(id), stoi(age));
    }
    cout << endl;
    traverse(root);
  }

  cout << endl;

  //calling remove function
  int num1;  //ID of node to be removed
  cout << "Type in the ID of the patient's record you want to remove: ";
  cin >> num1;
  remove(root, num1);

  traverse(root);
  cout << endl;

  //calling search function
  cout << "Type in the ID of the patient whose age you want to know: ";
  cin >> id;
  TreeNode * found_node = search(stoi(id), root);
  if (found_node == NULL)
    cout << "There's no patient with that ID number" << endl;
  else
    cout << "Age of patient "<< found_node->id << " is " << found_node->age << endl;

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
