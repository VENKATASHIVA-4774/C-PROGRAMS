#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node *newnode,*head,*temp;
    int n,count;
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    head=newnode;
    temp=head;
      if(n==1)
  {
    printf("0");
    return 1;
  }
  for(int i=2;i<=n;i++){
   newnode=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
    temp->next=newnode;
    temp=temp->next;
  }
  temp->next=0;
  temp=head;
   count=temp->data;
  temp->data=temp->next->data;
  temp->next->data=count;
  for(int i=0;i<n;i++)
  {
     printf("%d ",(temp->data));
     temp=temp->next;
    }
    return 0;
}