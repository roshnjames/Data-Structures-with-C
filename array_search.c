#include<stdio.h>
void main()
{
int a[20],i,ele,loc,n,item,flag=0;
printf("Enter the limit of the array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("enter the array element\n");
  scanf("%d",&ele);
  a[i]=ele;
}
printf("Enter the element you want to search in the array\n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
  if(a[i]==item)
  {
    flag=1;
    loc=i+1;
    break;
  }
}
if(flag)
{
  printf("%d is present at position: %d\n",item,loc);
}
else{
  printf("%d is not present in the entered array\n");
}
}
