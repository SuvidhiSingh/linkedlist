#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void reverse(){
	struct node *head,*prevnode,*nextnode,*currentnode;
	prevnode=NULL;
	currentnode=nextnode=head;
	while(nextnode!=NULL){
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	
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
	reverse();
	printLL();
	return 0;
}

