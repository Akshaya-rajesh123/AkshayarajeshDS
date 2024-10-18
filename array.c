#include<stdio.h>
int main()
{
int a[100],b[100],temp,n,m,i,k,j,c[100];
printf("Enter the limit of first array:");
scanf("%d",&n);
printf("Enter the first array series...");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//sorting arrays
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted array series is:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n Enter the Limit of second array:");
scanf("%d",&m);
printf("\n");
printf("\n Enter the Second array series:");
{
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}

//second sorting
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
printf("\n the sorted second array is:");
for(i=0;i<m;i++)
{
printf("\n%d",b[i]);
}
//merging
i=j=k=0;
while(i<n && j<m)
{
if(a[i]<=b[j])
{
c[k++]=a[i++];
}
else
{
c[k++]=b[j++];
}
}
while(i<n)
{
c[k++]=a[i++];
}
while(j<m)
{
c[k++]=b[j++];
}
printf("\nThe merged array is ");
for(k=0;k<m+n;k++)
{
printf("%d\t",c[k]);
}
}
}

