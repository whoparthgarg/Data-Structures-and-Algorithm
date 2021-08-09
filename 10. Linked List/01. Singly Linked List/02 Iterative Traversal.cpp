#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void print(node *head)//time comp. O(n) ; space comp. O(1)
{
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	/*
	Linked list here is :
	10 -> 20 -> 30 -> NULL
	*/
	node *head = new node(10);
	node *second = new node(20);
	node *third = new node(30);

	head->next = second;
	second->next = third;

	print(head);
	return 0;
}