#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void addbeg()
{
	struct node* head;
	struct node* temp;
	struct node* s;
	int data;
	printf("Enter the data");
	scanf("%d",&data);
	head=(struct node*)malloc(sizeof(struct node));
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	s=head;
	head=temp;
	head->next=s;
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
  addbeg();
  printLL();
  return 0;
}
