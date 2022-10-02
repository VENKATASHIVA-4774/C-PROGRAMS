#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 int main(){
    struct node *new_node,*head,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the value in first node:");
    scanf("%d",&new_node->data);
    head=new_node;
    temp=head;

    for(int i=2;i<=5;i++)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the value in node:");
    scanf("%d",&new_node->data);
    temp->next=new_node;
    temp=temp->next;

    }
    temp->next=NULL;
    
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    return 0;
    
}