#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node_s
{
	char data;
	int key;
	struct node_s *node_next;
};

struct node_s *head = NULL;
struct node_s *current = NULL;

void printList()
{
	struct node_s *ptr = head;
	while (ptr != NULL)
	{
		printf("(%d,%d)",ptr->key,ptr->data);
		ptr = ptr->node_next;
	}
}

// insert node into headed list
void insertHead(int key, int data)
{
	struct node_s *node = (node_s*)malloc(3 * sizeof(node_s*));

	node->data = data;
	node->key = key;

	node->node_next = head;

	head = node;
}

int main()
{

	printf("%d", sizeof(node_s));
	getchar();
	return 0;
}
