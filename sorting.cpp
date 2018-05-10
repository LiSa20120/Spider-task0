
#include<stdio.h>
void bubblesort(int arr[],int n)
{
int temp,i,j;
for (i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1]
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
int main()
{//lisa 106117044
int arr[]={36,46,23,78,34,89};
int n=sizeof(arr),i;
bubblesort(arr,n);
printf("Sorted array:");
for(i=0;i<n;i++)
printf("%d",arr[i]);
return 0;

} 
