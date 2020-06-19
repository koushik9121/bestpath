#include<stdio.h>
float h[10][3],v[10][3];

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
       
        if (arr[j] <= pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
       
        int pi = partition(arr, low, high); 
  
       
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main()
{
int p,q,r=0,i,j;
int a[10],b[10];

printf("enter the number of horizontal lines\n");
scanf("%d",&p);
printf("enter the number of vertical lines\n");
scanf("%d",&q);
printf("you need to give four values x1,y1,x2,y2 respectively\n");
printf("enter the horizontal points\n");
for(i=0;i<p;i++)
{
scanf("%f",&h[i][0]);
scanf("%f",&h[i][1]);
scanf("%f",&h[i][2]);
scanf("%f",&h[i][3]);
printf("meow\n");
}
printf("enter the vertical points\n");
for(i=0;i<q;i++)
{
scanf("%f",&v[i][0]);
scanf("%f",&v[i][1]);
scanf("%f",&v[i][2]);
scanf("%f",&v[i][3]);
printf("meow\n");
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{ 
if(h[i][0]<=v[j][0]&&h[i][2]>=v[j][2]&&h[i][1]>=v[j][1]&&h[i][3]<=v[j][3])
{
r=r+1;
}
}
}
printf("the number of point of intersection are %d\n",r);
}
