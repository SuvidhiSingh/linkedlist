#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void insertbefore()
{
	struct node* head;
	struct node* temp;
	struct node* s;
	int data;int databefore;
	printf("Enter the data");
	scanf("%d",&data);
	printf("Enter the databefore");
	scanf("%d",&databefore);
	head=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	s=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	while(s->next->data!=databefore)
	{
		s=s->next;
	}
	temp->next=s->next;
	s->next=temp;
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
	insertbefore();
	printLL();
	return 0;
}
