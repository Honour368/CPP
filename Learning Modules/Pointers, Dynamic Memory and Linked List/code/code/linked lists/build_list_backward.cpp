#include <iostream>

using namespace std;

struct Node
{
	int info;
	Node * next;
};

void print_list(Node * head)
{
    Node * current = head;
	while (current != NULL)
	{
		// process the current node, e.g., print the content
		cout << current->info << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

void head_insert(Node * & head, int num)
{
	Node * p = new Node;
	p->info = num;
	p->next = head;
	head = p;
}

Node * find_prev( Node * head, int num )
{
	if (head == NULL || head->info >= num )
		return NULL;

	// at least one node in the list now
	Node * current = head;

	while (current->next != NULL) {
		if (current->next->info >= num)
			return current;
		else
			current = current->next;
	}

	return current;
}

void insert( Node * after, int num )
{
	Node * p = new Node;
	p->info = num;
	p->next= after->next;
	after->next = p;
}

void delete_head( Node * & head)
{
	if (head != NULL) {
		Node * p = head;
		head = head->next;
		delete p;
	}
}

Node * sort(Node * & head)
{
	Node * head_sorted_list = NULL;  //first create a new list which should be sorted.
	int temp = head->info;  //create a variable to store the value of

	while (head != NULL) {
		temp = head->info;
		Node * prev_node = find_prev(head_sorted_list, temp); //this should return an int value (info)
		if (prev_node == NULL) {
			head_insert(head_sorted_list, temp);
		}
		else {
			insert(prev_node, temp);    //how is the smallest node linked to the head_sorted_list? this is done by getting the address of the prev_node stored in memory.
		}
		// head = head->next;  //remember not to do this, cuz then you loose track of the whole list because you don't know the real beginning of the linked list.
		delete_head(head);
		// temp = head->info;   // why doesn't this work when it is down here? because the 'head' here is poinitng to a NULL pointer and this crashes your program.
	}
	return head_sorted_list;
}


int main()
{
    Node * head = NULL;
    int num = 0;

    // build linked list backward
    cout << "input integers (-999 to end): ";
    cin >> num;
    while ( num != -999 ) {
        head_insert(head, num);
        cin >> num;
    }

    // print the items in the linked list
    print_list(head);
		print_list(sort(head));

    return 0;
}
