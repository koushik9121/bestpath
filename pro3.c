
#include<stdio.h>

int arr[1000], max, min;
void MM(int i,int j)
{
int max1,min1;
if(i==j)           
{
  max=min=arr[i];
}
else if(j==i+1)     
{
   if(arr[i]<arr[j])
   {
    min=arr[i];
    max=arr[j];
   }
   else
   {
    min=arr[j];
    max=arr[i];
   }
 }
else                
{
int m;
m=(i+j)/2;
MM(i,m);

max1=max;
min1=min;
MM(m+1,j);
if(min1<min)
  {
   min=min1;
  }
if(max<max1)
  {
   max=max1;
  }
} 
}

int main()
{
int n,i;
printf("Enter the number of elements\n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
min=9999;
max=-9999;
MM(0,n-1);
printf("Maximum value is %d Minimum value  %d\n",max,min);
return 0;
}


