#include<stdio.h>
int main()
{
int a[100],n,i,j,tempvalue;
printf("Enter the limit of first array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Array:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
tempvalue=a[i];
a[i]=a[j];
a[j]=tempvalue;
}
}
}
printf("Sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
}
