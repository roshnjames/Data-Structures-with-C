#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[20],arr1[20],i,n;
    printf("Enter the limit of the elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter an element\n");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            arr1[i]=1;
        }
        else{
            arr1[i]=0;
        }
        }
    printf("Printing bit string\n");
    printf("{");
    for(i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    }printf("}");
}