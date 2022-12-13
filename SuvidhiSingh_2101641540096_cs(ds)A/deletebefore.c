#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void deletebefore()
{
	struct node* head;
	struct node* s;
	struct node* temp;
	int data;
	printf("Enter data");
	scanf("%d",&data);
	int databefore;
	printf("Enter databefore");
	scanf("%d",&databefore);
	head=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	temp=(struct node*)malloc(sizeof(struct node));
	s=head;
	while(s->next->next->data!=databefore)
	{
		s=s->next;
	}
	temp=s->next;
	s->next=s->next->next;
	free(temp);
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
	deletebefore();
	printLL();
	return 0;
}

