#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void deleteend()
{
 struct node* head;
 struct node* s;
 struct node*temp;
 head=(struct node*)malloc(sizeof(struct node));
 s=(struct node*)malloc(sizeof(struct node));
 temp=(struct node*)malloc(sizeof(struct node));
 if(head!=NULL)
 {
s=head;
 while(s->next->next!=NULL)
 {
 	s=s->next;
 }
 temp=s->next;
 s->next=NULL;
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
	deleteend();
	printLL();
	return 0;
}
