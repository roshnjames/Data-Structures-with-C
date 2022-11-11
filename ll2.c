#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

void insertion();
void deletion();
void display();

struct node *ptr,*temp,*newnode,*head,*arr[30],*nxt;
head=NULL;
int dt,d,count=0,i=0,pos;
void main()
{
int op;
do{
printf("Enter your choice\n");
printf("1. insert\n2. delete\n3. display\n4. EXIT\n");
scanf("%d",&op);
switch(op)
{
case 1:insertion();
       break;
case 2:deletion();
       break;
case 3:display();
       break;
case 4:printf("Quitting...\n");
       break;
default:printf("Enter a valid option\n");

}
while(op!=4);
}

void insertion()
{
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
head->next=newnode;
printf("Enter the data for the newnode\n");
scanf("%d",&dt);
newnode->data=dt;
newnode->next=NULL;
ptr=newnode;
}
else{
ptr->next=newnode;
printf("Enter the data for the newnode\n");
scanf("%d",&dt);
newnode->data=dt;
newnode->next=NULL;
ptr=newnode;
}
}

void deletion()
{
if(head==NULL)
{
printf("No data to delete\n");
}
else
{
for(temp=head;temp->next!=NULL;temp=temp->next)
{
count=count+1;
arr[i]=temp;
i+=1;
}
printf("Enter the type of deletion\n1. At beginning\n2. Random\n3. In the end\n");
scanf("%d",&d);
if(d==1)
{
head->next=arr[2];
free(arr[1]);
printf("deleted first element\n");
}
else if(d==2)
{
printf("Enter the position you want to delete the lement\n");
scanf("%d",&pos);
if(pos>=count-1)
{
printf("Exceeded maximum limit\n");
}
else
{
temp=arr[pos+1];
ptr=arr[pos];
ptr->next=temp->next;
free(temp)
printf("Element deleted successfully\n");
}}
else
{
printf("Deletion from the end\n");
temp=arr[count];
ptr=arr[count-1];
ptr->next=NULL;
free(temp);
}}
}


void display()
{
if(head==NULL)
{
printf("No data to display\n");
}
else{
for(temp=head;temp->next!=NULL;temp=temp->next)
{
if(count!=0){
printf("%d\n",temp->data);
}
}
}






