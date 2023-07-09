#include<stdio.h>
#include<stdlib.h>
struct node 
{
int value;
struct node *next;
};
void rearrange(struct node *list)
{
struct node *p, * q;
int temp;
if ((!list) || !list->next) 
	return;
p = list;
q = list->next;
while(q) 
{
	temp = p->value;
	p->value = q->value;
	q->value = temp;
	p = p->next;
	q = p?p->next:0;
}
}
int main()
{
    struct node* n= (struct node*)malloc(sizeof(struct node));
    struct node* head=n;
    n->value=1;
    struct node*t =n;
    for(int i=2;i<8;i++)
    {
        struct node* n= (struct node*)malloc(sizeof(struct node));
        t->next=n;
        n->value=i;
        t=n;
    }
    t->next=NULL;
    t=head;
    while(t)
    {
        printf("%d  ",t->value);
        t=t->next;
    }
    rearrange(head);
    t=head;
    printf("\n\n\n");
    while(t)
    {
        printf("%d  ",t->value);
        t=t->next;
    }
}