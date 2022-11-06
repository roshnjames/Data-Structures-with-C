#include<stdio.h>
#include<stdlib.h>


struct node{
  int data;
  struct node* next;
};
int insert();
int data;
int main()
{
  struct node *head=NULL;
  struct node *ptr=NULL;

  struct node *first=NULL;
  struct node *second=NULL;
  struct node *third=NULL;


  printf("Creating a linked list with 3 nodes\n");
  first=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  head=first;




  first->data=insert();
  first->next=second;

  second->data=insert();
  second->next=third;

  third->data=insert();
  third->next=NULL;

  printf("Displaying the entered nodes\n");
  ptr=head;


  do{
    data=ptr->data;
    printf("%d\n",data);
    ptr=ptr->next;
  }while(ptr!=NULL);


return 0;
}

int insert()
{
  printf("Enter the data\n");
  scanf("%d",&data);
  return data;
}
