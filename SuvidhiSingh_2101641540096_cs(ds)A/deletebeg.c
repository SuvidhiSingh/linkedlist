#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void deletebeg()
{
	struct node* head;
	struct node* temp;
	head=(struct node*)malloc(sizeof(struct node));
	temp=(struct node*)malloc(sizeof(struct node));
	if(head!=NULL)
	{
	temp=head;
	head=head->next;
	free(temp);
}
else
{
	printf("LINKED LIST DOESNOT EXIST");
}
}
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
	deletebeg();
	printLL();
	return 0;
}
