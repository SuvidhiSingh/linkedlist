#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void addend()
{
	struct node* head;
	struct node* temp;
	struct node* s;
	int data;
	printf("Enter the data");
	scanf("%d",&data);
	head=(struct node*)malloc(sizeof(struct node));
	temp=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		s=head;
		while(s->next!=NULL)
		{
			s=s->next;
		}
		s->next=temp;
	}
}
void printLL()
{
	struct node* head;
	struct node* s;
	s=head;
	while(s!=NULL)
	{
		printf("%d",s->data);
		printf("->");
		s=s->next;
	}
}
int main()
{
	addend();
	printLL();
	return 0;
}
