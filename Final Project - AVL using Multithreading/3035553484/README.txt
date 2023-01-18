***Task 1***
-> Four function codes were written in this program file (1.cpp) namely: 'initialize_tree()', 'insert()', 'remove()', and 'search()'

  'initialize_tree()':
    This void function takes a node as a parameter (in this case, the node is the root node which points to NULL) and passes the node argument
    to another function called 'insert()' along with data from a pre-designed 2 dimensional array which contains the ID and age of each
    node. The insert function inserts each node's data into its appropriate place in the binary search tree.
  'insert()':
    This void function takes in a node passed by reference, and 2 integers (ID and AGE respectively) passed by value. It creates a new node called 'p',
    checks if present node points to NULL or not. If it points to NULL, the function updates p's id and age with the parameter values of ID and AGE,
    and points p's left and right pointers to NULL. This deals with the case where we are inserting at the leafs of the tree. If the node doesn't point
    to NULL, it checks if the node is already in the tree(if ID == node->id), and updates the age of the node if it is present. if the node isn't in the tree,
    it compares the id of the present node with the parameter value of ID and decides whether to recursively insert the node to the left or right of the present node.
    So, this function assumes that we either always insert at the leafs of the tree or we update the age of an existing node.
  'search()':
    This recursive function takes in the id of the node to be found and the root node. It uses the principle of binary search to search. For its base case, it first checks
    if the node is a NULL pointer (which means we have reached a leaf of the tree) or if the present node's id matches the id we are looking for, it returns that node.
    Else, it recursively searches the left node if the id we are looking for is less than the present node's id, and searches the right node if the opposite is the case.
  'remove()':
    This void function takes in the root node and the id of the node to remove. It searches for the node with that id, and checks if the node has two children, 1 child,
    or no children. If the node has two children, it finds the node's in-order predecessor (iop - the rightmost node of the present node's left child), and replaces the node's
    id and age with its iop's id and age, and then deletes the iop node. If the node has only one child, it replaces the node with its child and deletes its child.
    If the node has no children, it sets the link from its parent node to it as NULL and then deletes the node. This function makes use of 3 helper functions - 'find_max()',
    'replace_node_in_parent()', and 'find_parent_node()'

-> This program is interactive, that is, it asks for certain inputs and reacts based on the inputs. For example, it tells you to input the id of a patients record you want
   to delete. Based on your input, it will delete a certain patient's record.
-> This program file concludes with deleting the whole binary tree to reclaim memory space.
-> This program file can be run in the Atom editor by pressing 'F6'. It can be compiled to an executable in linux command terminal by typing the code: g++ -pedantic-errors -std=c++11 1.cpp -o 1
   To execute the executable file, type: ./1




***Task 2***
-> For a tree to be balanced, the balance factor of each node (the height of its right child minus the height of its left child) on the tree must be within the range {-1, 1}.
   Based on this logic,
   Q1.) Trees a and c are unbalanced.
   Q2.) No, the binary search tree in task 1 is not balanced.

-> This program file added an extra function called 'rebalance()' and takes only a node as a parameter, treats the node as a tree and rebalances the node. In this case, we pass
   the root of the tree we wish to rebalance to this function. It first checks if the tree is unbalanced (Y or N), then if not balanced, it traverses through the tree (using 'traverse_rebalance()' function)
   to search for all the nodes in the tree that are unbalanced. Since it traverses from left to right, the global variable 'Unbalanced_node' stores the rightmost node that is unbalanced.
   So, it rebalances from right to left. To rebalance each node, it first checks if the node is right heavy (balance factor>0) or left heavy (balance factor<0), then checks if its
   heavier side is right heavy or left heavy. With these checks, there are four ways to rebalance the node.
   -> Rotate left if node is right heavy and node's right child is right heavy.
   -> Rotate right if node is left heavy and node's left child is left heavy.
   -> Rotate right first on the node's right child, then rotate left on the node if node is right heavy and node's right child is left heavy.
   -> Rotate left first on the node's left child, then rotate right on the node if node is left heavy and node's left child is right heavy.
   The above 4 ways make use of two helper functions - 'left_rotate()' and 'right_rotate()'. These helper functions return the pivot node (the left child of node passed to the function
   if rotating right or the right child of node passed to the function if rotating left).
   This loops until the whole tree is balanced. After which, it will print out that the tree has been rebalanced.

   Note: Since the loop has started, it means that the function is now trying to rebalance an Unbalanced_node. So, when considering what kind of rotation to use, balance factor >=0 is considered as right heavy
   while balance factor < 0 is considered as left heavy. This is done so we don't have to think about the case of when balance factor = 0.

   Q3.) The program automatically detects which balancing method to use to rebalance a node in the tree in task 1 Q2 and prints it out. For clarity, the unbalanced node is right left heavy and so,
        it rotates right first on the node's right child, then rotate left on the node.
-> This program file can be run in the Atom editor by pressing 'F6'. It can be compiled to an executable in linux command terminal by typing the code: g++ -pedantic-errors -std=c++11 2.cpp -o 2
   To execute the executable file, type: ./2




***Task 3***
-> This program file implemented a concurrent search on the BST of task 1 by using a function called 'Concurrent_search()'. First of all, this program checks if the BST needs to be rebalanced, and rebalances it if needed.
   This function takes in two parameters: the id of the node to be searched and the root node. This function creates two threads, one to search the left subtree and the other to search the right subtree and stores
   both threads in a vector of type thread. Both threads use a pre-order traversal method by calling the helper function 'search_preorder_traverse()' and pass to it the id of the node to be searched for and the left child node
   or right child node. While searching, if it finds the node, it stores the node in a global variable 'found_node'. Before joining each thread, it prints out the root node's id first, then it joins each thread to the function thread.
   Each thread prints out the concurrent search results (which is the pre-order traversal of the tree). So, we join the left thread first and then join the right thread so that we can preserve the order of the pre-order traversal.
   After joining both threads, it prints out the age of the patient we are looking for.
-> This program file can be compiled to an executable in linux command terminal by typing the code: g++ -pedantic-errors -std=c++11 3.cpp -lpthread -o 3
   To execute the executable file, type: ./3
