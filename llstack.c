#include<stdio.h>
#include<stdlib.h>

 struct node{
   int data;
   struct node *previous;
 };

 struct node *newnode,*ptr,*top=NULL;

void push(void);
void pop(void);
void display(void);


 void main()
 {
   int op;
   do{
     printf("Enter your Option!\n1. Push\n2. Pop\n3. Display\n4. Exit\n_____________________option :");
     scanf("%d",&op);
     switch(op){
       case 1:printf("Push.....\n");
              push();
              break;
      case 2:printf("Pop....\n");
             pop();
             break;
      case 3:printf("Dispalying the Stack elements......\n");
             display();
             break;
      default:printf("Invalid option\n");
             break;
     }
   }while(op!=4);
 }


 void push()
 {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data\n");
   scanf("%d",&newnode->data);
   newnode->previous=top;
   top=newnode;
   printf("inserted\n");
 }

 void pop(){
      ptr=top;
      top=top->previous;
      free(ptr);
      printf("deleted\n");
 }

 void display(){
   ptr=top;
   while(ptr->previous!=NULL){
     printf("%d\t",ptr->data);
     ptr=ptr->previous;
   }
 }
