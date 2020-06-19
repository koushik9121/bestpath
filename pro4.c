    #include<stdio.h>
   
    #define TRUE 1
    #define FALSE 0
    int inc[50],w[50],sum,n;
   
 
    void main() 
{
    	int i,j,n,temp,total=0;
    	
    	printf("Enter how many numbers\n");
    	scanf("%d",&n);
    	printf("Enter %d numbers to the set\n",n);
    	for (i=0;i<n;i++) 
       {
    		scanf("%d",&w[i]);
    		total+=w[i];
    	}
    	printf("Input the sum value to create sub set\n");
    	scanf("%d",&sum);
    	for (i=0;i<=n;i++)
    	  for (j=0;j<n-1;j++)
    	   if(w[j]>w[j+1]) 
        {
    		temp=w[j];
    		w[j]=w[j+1];
    		w[j+1]=temp;
    	}
    	
    	if(total<sum)
    	  printf("Subset construction is not possible\n");
       else if(sum>total)
          printf("Subset construction is not possible\n");
        else  
        {
    		for (i=0;i<n;i++)
    		   inc[i]=0;
    		printf("The solution using backtracking is\n");
    		sumset(-1,0,total);
    	}
    	
}
int solution(int i,int wt,int total) 
    {
    	return( ( (wt+total) >=sum)&&( (wt==sum)||(wt+w[i+1]<=sum)  ) );
    }
void sumset(int i,int wt,int total)
{
    	int j;
    	if(solution(i,wt,total)) 
           {
    		if(wt==sum)
                   {
    			
    			for (j=0;j<=i;j++)
    			    if(inc[j]==1)
    			     printf("%d ",w[j]);
    			printf("\n");
    	           } 
                else
                   {
    			inc[i+1]=TRUE;
                      
    			sumset(i+1,wt+w[i+1],total-w[i+1]);
    			inc[i+1]=FALSE;
                     
    			sumset(i+1,wt,total-w[i+1]);
    	           }
             
    	   }           
}
