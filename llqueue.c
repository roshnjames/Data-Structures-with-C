#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};
 struct node *front=NULL,*rear=NULL,*ptr,*newnode;

 void enqueue(void);
 void dequeue(void);
 void display(void);

 void main()
 {
   int op;
   do{
     printf("Enter your Option!\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n_____________________option :");
     scanf("%d",&op);
     switch(op){
       case 1:printf("Enqueue.....\n");
              enqueue();
              break;
      case 2:printf("Dequeue....\n");
             dequeue();
             break;
      case 3:printf("Dispalying the Queue elements......\n");
             display();
             break;
      default:printf("Invalid option\n");
             break;
     }
   }while(op!=4);
 }



 void enqueue()
 {
   newnode=(struct node*)malloc(sizeof(struct node));
   if((front==NULL)&&(rear==NULL)){
     printf("Enter data\n");
     scanf("%d",&newnode->data);
     newnode->next=front;
     front=newnode;
     rear=newnode;
   }
   else {
     printf("Enter data\n");
     scanf("%d",&newnode->data);
     rear->next=newnode;
     rear=newnode;
   }
 }

 void dequeue()
 {
   if((front==NULL)&&(rear==NULL))
   {
     printf("Queue is empty\n");
   }
   else{
     ptr=front;
     front=front->next;
     free(ptr);
     printf("deleted successfully\n");
   }
 }


 void display()
 {
   if((front==NULL)&&(rear==NULL))
   {
     printf("Queue is empty\n");
   }
   else{
     ptr=front;
     while(ptr!=NULL){
       printf("%d\t",ptr->data);
       ptr=ptr->next;
     }printf("\n");
   }
 }
