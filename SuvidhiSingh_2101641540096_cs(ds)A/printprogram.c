#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void printLL()
{
	struct node* head;
	struct node* s;
	s=head;
	while(s->next!=NULL)
	{
		printf("%d",s->data);
		printf("->");
		s=s->next;
	}
	printf("%d",s->data);
}
int main()
{
	printLL();
	return 0;
}
