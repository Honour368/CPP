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

void tail_insert(Node * & head,	Node * & tail, int num)
{
	Node * p = new Node;
	p->info = num;
	p->next = NULL;

	if (head == NULL) {
		head = p;
		tail = p;
	}
	else {
		tail->next = p;
		tail = p;
	}
}

void divide(Node * & head, Node * & second)
{
	Node * current = head;
	int count = 1;
	while (current!=NULL) {
		count++;
		current = current->next;
	}
	second = head;
	current = head;
	for (int i=0; i<count/2; i++) {
		second = second->next;
	}
	for (int i=0; i<(count/2)-1; i++){
		current  = current->next;
	}
	current->next = NULL;
}



int main()
{
    Node * head = NULL, * tail = NULL;
    int num = 0;

    // build linked list backward
    cout << "input integers (-999 to end): ";
    cin >> num;
    while ( num != -999 ) {
        tail_insert(head, tail, num);
        cin >> num;
    }

    // print the items in the linked list
    print_list(head);
		int a = tail->info;
		int b = (head->next->info);
		cout << a << " " << b << endl;

		Node * second = NULL;
		divide(head, second);
		print_list(head);
		print_list(second);

    return 0;
}
