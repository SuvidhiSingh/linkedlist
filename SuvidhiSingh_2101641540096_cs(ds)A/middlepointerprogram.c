#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int middlepointer()
{
	struct node* head;
	struct node* A;
	struct node* B;
	head=(struct node*)malloc(sizeof(struct node));
	A=(struct node*)malloc(sizeof(struct node));
	B=(struct node*)malloc(sizeof(struct node));
	A=head;
	B=head;
	while(B!=NULL&&B->next!=NULL&&B->next->next!=NULL)
	{
		A=A->next;
		B=B->next;
	}
return A;
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
	middlepointer();
	printLL();
	return 0;
}
