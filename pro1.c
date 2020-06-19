#include<stdio.h> 
  
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
  

void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
{
        printf("%d ", arr[i]); 
}
    printf("\n"); 
} 
  

int main() 
{ 
    int arr[100]; 
    int n,a,i;
printf("enter the number of shoes of odd number\n");
scanf("%d",&n); 
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
    quickSort(arr, 0, n-1); 
    printf("Sorted array \n"); 
    print(arr, n); 
  
for(i=0;i<n;i++)
{
if(arr[i]==arr[i+1])
{
i=i+1;
}
else
{
printf("the unpaired shoe is %d\n",arr[i]);

}
 
}

















} 
